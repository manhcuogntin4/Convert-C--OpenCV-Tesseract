/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 3.0.10
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */


public class ocrJNI {
  public final static native void pthreadParams_t_src_set(long jarg1, pthreadParams_t jarg1_, long jarg2);
  public final static native long pthreadParams_t_src_get(long jarg1, pthreadParams_t jarg1_);
  public final static native void pthreadParams_t_blacklist_set(long jarg1, pthreadParams_t jarg1_, String jarg2);
  public final static native String pthreadParams_t_blacklist_get(long jarg1, pthreadParams_t jarg1_);
  public final static native void pthreadParams_t_whitelist_set(long jarg1, pthreadParams_t jarg1_, String jarg2);
  public final static native String pthreadParams_t_whitelist_get(long jarg1, pthreadParams_t jarg1_);
  public final static native void pthreadParams_t_OCR_set(long jarg1, pthreadParams_t jarg1_, long jarg2);
  public final static native long pthreadParams_t_OCR_get(long jarg1, pthreadParams_t jarg1_);
  public final static native void pthreadParams_t_lang_set(long jarg1, pthreadParams_t jarg1_, String jarg2);
  public final static native String pthreadParams_t_lang_get(long jarg1, pthreadParams_t jarg1_);
  public final static native void pthreadParams_t_conf_set(long jarg1, pthreadParams_t jarg1_, long jarg2);
  public final static native long pthreadParams_t_conf_get(long jarg1, pthreadParams_t jarg1_);
  public final static native void pthreadParams_t_interp_set(long jarg1, pthreadParams_t jarg1_, long jarg2);
  public final static native long pthreadParams_t_interp_get(long jarg1, pthreadParams_t jarg1_);
  public final static native long new_pthreadParams_t();
  public final static native void delete_pthreadParams_t(long jarg1);
  public final static native void output_result_strResult_set(long jarg1, output_result jarg1_, long jarg2);
  public final static native long output_result_strResult_get(long jarg1, output_result jarg1_);
  public final static native void output_result_index_set(long jarg1, output_result jarg1_, long jarg2);
  public final static native long output_result_index_get(long jarg1, output_result jarg1_);
  public final static native long new_output_result();
  public final static native void delete_output_result(long jarg1);
  public final static native void readThreadParams(long jarg1, pthreadParams_t jarg1_, long jarg2, output_result jarg2_);
  public final static native void initThreadParams(long jarg1, pthreadParams_t jarg1_, long jarg2, long jarg3);
  public final static native void initTess(long jarg1);
  public final static native long recognizeLineAtomic(long jarg1);
  public final static native long ocr(String jarg1);
}