#include <iostream>
#include <vector>
#include <fstream>
#include <opencv2/opencv.hpp>
#include <sstream>
#include <tesseract/baseapi.h>

typedef struct {
    std::vector<cv::Mat *> src;
    char blacklist[128];
    char whitelist[128];
    tesseract::TessBaseAPI *OCR = NULL;
    char lang[64];
    //float conf;
    std::vector<float> conf;
    //char interp[MAX_OCR_STR_LEN];
    std::vector<std::string> interp;

} pthreadParams_t;
typedef struct 
{
	std::vector<std::string> strResult;
	std::vector<int> index;
} output_result;

void readThreadParams(pthreadParams_t* paramPtr, output_result &out);
void initThreadParams(pthreadParams_t* paramPtr, const std::vector<cv::Mat *> &src, tesseract::TessBaseAPI *OCR);
void initTess(std::vector< tesseract::TessBaseAPI *> &ocrs);
void *recognizeLineAtomic(void* params);
void ocr(char** st, int size, std::string strFileText);
