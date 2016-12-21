/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 3.0.10
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */


public class ocr {
  public static void readThreadParams(pthreadParams_t paramPtr, output_result out) {
    ocrJNI.readThreadParams(pthreadParams_t.getCPtr(paramPtr), paramPtr, output_result.getCPtr(out), out);
  }

  public static void initThreadParams(pthreadParams_t paramPtr, SWIGTYPE_p_std__vectorT_cv__Mat_p_t src, SWIGTYPE_p_tesseract__TessBaseAPI OCR) {
    ocrJNI.initThreadParams(pthreadParams_t.getCPtr(paramPtr), paramPtr, SWIGTYPE_p_std__vectorT_cv__Mat_p_t.getCPtr(src), SWIGTYPE_p_tesseract__TessBaseAPI.getCPtr(OCR));
  }

  public static void initTess(SWIGTYPE_p_std__vectorT_tesseract__TessBaseAPI_p_t ocrs) {
    ocrJNI.initTess(SWIGTYPE_p_std__vectorT_tesseract__TessBaseAPI_p_t.getCPtr(ocrs));
  }

  public static SWIGTYPE_p_void recognizeLineAtomic(SWIGTYPE_p_void params) {
    long cPtr = ocrJNI.recognizeLineAtomic(SWIGTYPE_p_void.getCPtr(params));
    return (cPtr == 0) ? null : new SWIGTYPE_p_void(cPtr, false);
  }

  public static output_result ocr(String st) {
    return new output_result(ocrJNI.ocr(st), true);
  }

}