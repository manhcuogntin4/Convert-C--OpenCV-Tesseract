#include"ocr.h"
void readThreadParams(pthreadParams_t* paramPtr, output_result &out)
{
	std::cout<<"Here"<<std::endl;
	for(int idx = 0; idx < 8; idx++)
	{
		 int i=idx;
		 for (std::vector<std::string>::iterator it = paramPtr[idx].interp.begin(); it != paramPtr[idx].interp.end(); ++it)
    	 {
    	 	//std::cout << ' ' << *it;
    	 	out.strResult.push_back(*it);
    	 	out.index.push_back(i);
    	 	i+=8;
    	 }	
	}
	int iLine=0;
	for(std::vector<int>::iterator i=out.index.begin(); i!=out.index.end();++i)
	{
		std::vector<int>::iterator p = out.index.begin ();
		p=std::find(out.index.begin(),out.index.end(),iLine);
		if(p!=out.index.end())
		{	
			int nPosition = distance (out.index.begin(), p);
			std::cout<<out.strResult[nPosition];
		}
		iLine++;
	}
}


void initThreadParams(pthreadParams_t* paramPtr, const std::vector<cv::Mat *> &src, tesseract::TessBaseAPI *OCR)
{

    paramPtr->src = src;
    paramPtr->conf.clear();
    paramPtr->OCR = OCR;

}


void initTess(std::vector< tesseract::TessBaseAPI *> &ocrs)
{
    ocrs.clear();
    for(int i = 0; i < 8; i++)
    {
        tesseract::TessBaseAPI* OCR_api = new tesseract::TessBaseAPI();
        std::cout << "Init" << std::endl;
        OCR_api->Init("./", "eng");
        std::cout << "End Init" << std::endl;
        OCR_api->SetVariable("debug_file", "/dev/null");
        OCR_api->SetPageSegMode(tesseract::PSM_SINGLE_BLOCK);
        ocrs.push_back(OCR_api);
    }
}

void *recognizeLineAtomic(void* params)
{
    pthreadParams_t *realParams = (pthreadParams_t*)params;
    tesseract::TessBaseAPI *OCR = realParams->OCR;
    std::string interp;
    // Tesseract 3.02 only
    //    OCR->SetVariable("language_model_penalty_non_dict_word", "0.0");
 //   OCR->SetVariable("language_model_penalty_non_freq_dict_word", "0.0");



    for(int img_idx = 0; img_idx < (int) realParams->src.size(); img_idx++)
    {
        cv::Mat *src = realParams->src[img_idx];


        int bytesPerPixel = src->elemSize();
        int bytesPerLine = src->step;
        OCR->SetImage(src->data,
                      src->cols,
                      src->rows,
                      bytesPerPixel,
                      bytesPerLine);
        interp = OCR->GetUTF8Text();
        //std::cout << interp << std::endl;
        realParams->interp.push_back(interp);// Add here
        /*if(interp.length() >= 50)
        {
            //strcpy(realParams->interp, "");
            //realParams->conf = 0.0;
            realParams->interp.push_back("");
            realParams->conf.push_back(0.0f);
        }
        else
        {
            //strcpy(realParams->interp, interp);
            //realParams->conf = OCR->GetIterator()->Confidence(tesseract::RIL_TEXTLINE);
            realParams->interp.push_back(interp);
            realParams->conf.push_back(OCR->GetIterator()->Confidence(tesseract::RIL_TEXTLINE));
        }*/
    }

    return (void*)0;
}


void ocr(char** st, int size, std::string strFileText)
{

    // Init tesseract apis
    std::vector<tesseract::TessBaseAPI*> ocrs;
    initTess(ocrs);
    std::vector<cv::Mat> images, clean_images;
    int max_height=0;
    int total_height=0;
    int moyen_height=0;
    int count=0;
    //std::cout<<sizeof(st)/sizeof(st[0])<<std::endl;
    for(int fidx = 0; fidx < size; fidx++)
    {
        std::cout<<sizeof(st)/sizeof(st[0])<<std::endl;
        std::cout<<st[fidx]<<std::endl;
        char* input_path = st[fidx];
        cv::Mat src_img = cv::imread(input_path, 0);
        std::vector<int> markers;
        markers.clear();
        int WHITE_SPACE = 0;
        int IN_LINE = 1;
        int status = WHITE_SPACE;
        for(int i = 0; i < src_img.rows; i++)
        {
            bool found_pixel = false;
            for(int j = 0; j < src_img.cols; j++)
            {
                if(src_img.at<uchar>(i,j) < 250)
                {
                    found_pixel = true;
                    break;
                }
            }
            if(found_pixel)
            {
                if(status == WHITE_SPACE)
                {
                    status = IN_LINE;
                    markers.push_back(i);
                }
            }
            else
            {
                if(status != WHITE_SPACE)
                {
                    status = WHITE_SPACE;
                    markers.push_back(std::max(0, i - 1));
                }
            }
        }

        std::vector<cv::Rect> ROIs;

        for(int i = 0; i < (int) markers.size(); i+= 2)
        {
            int height = markers[i + 1] - markers[i] + 1;
            cv::Rect ROI = cv::Rect(0,markers[i], src_img.cols, height);

            int min_x = 0;
            int max_x = 0;
            for(int j = 0; j < src_img.cols; j++)
            {
                bool found_pixel = false;
                for(int k = 0; k < height; k++)
                {
                    if(src_img(ROI).at<uchar>(k, j) < 100)
                    {
                        found_pixel = true;
                        break;
                    }
                }
                if(found_pixel)
                {
                    min_x = j;
                    break;
                }
            }

            for(int j = src_img.cols - 1; j >= 0; j--)
            {
                bool found_pixel = false;
                for(int k = 0; k < height; k++)
                {
                    if(src_img(ROI).at<uchar>(k,j) < 100)
                    {
                        found_pixel = true;
                        break;
                    }
                }
                if(found_pixel)
                {
                    max_x = j;
                    break;
                }
            }
            int width = max_x - min_x + 1;
    	    if( height > 10 && width > 12)
    	    { 
                cv::Rect ROI2 = cv::Rect(min_x, ROI.y, width, height);
    	       //std::stringstream line_filename;
    	       //line_filename << input_path << "_lines_" << i << ".png";
    	       //cv::imwrite(line_filename.str(), src_img(ROI2));
                images.push_back(src_img(ROI2));
                ROIs.push_back(ROI2);
                count++;
                total_height+=height;
                if(height>max_height)
                        max_height=height;
            }
        }


    std::cout << "Image " << fidx << " processed " << std::endl;
    }
    //
    moyen_height=total_height/count;
    int seuil=(moyen_height+max_height);
    std::cout<<"seuil:" << moyen_height+0.2*seuil<<"Moyenn:"<<moyen_height<<" Max:"<< max_height<<std::endl;
    // TODO: Remouve the big size images (logo)
    int count_clean=0;
    for(int i=0;i<(int) images.size();i++){
        if(images[i].rows< moyen_height+0.2*seuil)
        {
            std::cout<<images[i].rows<<std::endl;
            clean_images.push_back(images[i]);
            //std::stringstream line_filename;
            //line_filename << "_lines_" << i << ".png";
            //cv::imwrite(line_filename.str(), images[i]);
            count_clean++;
        }

    }
    
    std::vector< std::vector<cv::Mat *> > lang_images;

    
    for(int j = 0; j < 8; j++)
    {
        std::vector<cv::Mat*> imgs;
        if((count_clean*1.0/count)<0.8)
        {   
            std::cout<<"True"<<std::endl;
            for(int i = 0; i < (int) images.size(); i+= 8)
            {
                if(i + j < images.size())
                {

                    imgs.push_back(&images[i + j]);

                }

            }
            lang_images.push_back(imgs);
        }
        else
        {
            std::cout<<"Not max value"<<std::endl;
             for(int i = 0; i < (int) clean_images.size(); i+= 8)
            {
                if(i + j < clean_images.size())
                {

                    imgs.push_back(&clean_images[i + j]);

                }

            }
            lang_images.push_back(imgs);
        }

    }

    pthread_t threadTab[8];
    int retTab[8];
    pthreadParams_t *params = new pthreadParams_t [8];
    for(int j = 0; j < 8; j++)
    {
        initThreadParams(&(params[j]), lang_images[j], ocrs[j]);
    }
    for(int j = 0; j < 8; j++)
    {
        retTab[j] = pthread_create( &threadTab[j], NULL, &recognizeLineAtomic, (void*)(&(params[j])) );
    }
    for(unsigned int i = 0; i < 8; i++) {
        pthread_join(threadTab[i], NULL);
    }
    output_result ot;
    readThreadParams(params,ot);
    delete [] params;
    std::ofstream myfile;
    const char *cstr = strFileText.c_str();
    myfile.open(cstr);
    for(std::vector<int>::iterator i=ot.index.begin(); i!=ot.index.end();++i)
    {
        myfile<<ot.strResult[*i]<<std::endl;
    }

    myfile.close();
    //return ot;
}
