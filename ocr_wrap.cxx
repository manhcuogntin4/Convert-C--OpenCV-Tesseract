/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 3.0.10
 *
 * This file is not intended to be easily readable and contains a number of
 * coding conventions designed to improve portability and efficiency. Do not make
 * changes to this file unless you know what you are doing--modify the SWIG
 * interface file instead.
 * ----------------------------------------------------------------------------- */


#ifndef SWIGJAVA
#define SWIGJAVA
#endif



#ifdef __cplusplus
/* SwigValueWrapper is described in swig.swg */
template<typename T> class SwigValueWrapper {
  struct SwigMovePointer {
    T *ptr;
    SwigMovePointer(T *p) : ptr(p) { }
    ~SwigMovePointer() { delete ptr; }
    SwigMovePointer& operator=(SwigMovePointer& rhs) { T* oldptr = ptr; ptr = 0; delete oldptr; ptr = rhs.ptr; rhs.ptr = 0; return *this; }
  } pointer;
  SwigValueWrapper& operator=(const SwigValueWrapper<T>& rhs);
  SwigValueWrapper(const SwigValueWrapper<T>& rhs);
public:
  SwigValueWrapper() : pointer(0) { }
  SwigValueWrapper& operator=(const T& t) { SwigMovePointer tmp(new T(t)); pointer = tmp; return *this; }
  operator T&() const { return *pointer.ptr; }
  T *operator&() { return pointer.ptr; }
};

template <typename T> T SwigValueInit() {
  return T();
}
#endif

/* -----------------------------------------------------------------------------
 *  This section contains generic SWIG labels for method/variable
 *  declarations/attributes, and other compiler dependent labels.
 * ----------------------------------------------------------------------------- */

/* template workaround for compilers that cannot correctly implement the C++ standard */
#ifndef SWIGTEMPLATEDISAMBIGUATOR
# if defined(__SUNPRO_CC) && (__SUNPRO_CC <= 0x560)
#  define SWIGTEMPLATEDISAMBIGUATOR template
# elif defined(__HP_aCC)
/* Needed even with `aCC -AA' when `aCC -V' reports HP ANSI C++ B3910B A.03.55 */
/* If we find a maximum version that requires this, the test would be __HP_aCC <= 35500 for A.03.55 */
#  define SWIGTEMPLATEDISAMBIGUATOR template
# else
#  define SWIGTEMPLATEDISAMBIGUATOR
# endif
#endif

/* inline attribute */
#ifndef SWIGINLINE
# if defined(__cplusplus) || (defined(__GNUC__) && !defined(__STRICT_ANSI__))
#   define SWIGINLINE inline
# else
#   define SWIGINLINE
# endif
#endif

/* attribute recognised by some compilers to avoid 'unused' warnings */
#ifndef SWIGUNUSED
# if defined(__GNUC__)
#   if !(defined(__cplusplus)) || (__GNUC__ > 3 || (__GNUC__ == 3 && __GNUC_MINOR__ >= 4))
#     define SWIGUNUSED __attribute__ ((__unused__))
#   else
#     define SWIGUNUSED
#   endif
# elif defined(__ICC)
#   define SWIGUNUSED __attribute__ ((__unused__))
# else
#   define SWIGUNUSED
# endif
#endif

#ifndef SWIG_MSC_UNSUPPRESS_4505
# if defined(_MSC_VER)
#   pragma warning(disable : 4505) /* unreferenced local function has been removed */
# endif
#endif

#ifndef SWIGUNUSEDPARM
# ifdef __cplusplus
#   define SWIGUNUSEDPARM(p)
# else
#   define SWIGUNUSEDPARM(p) p SWIGUNUSED
# endif
#endif

/* internal SWIG method */
#ifndef SWIGINTERN
# define SWIGINTERN static SWIGUNUSED
#endif

/* internal inline SWIG method */
#ifndef SWIGINTERNINLINE
# define SWIGINTERNINLINE SWIGINTERN SWIGINLINE
#endif

/* exporting methods */
#if defined(__GNUC__)
#  if (__GNUC__ >= 4) || (__GNUC__ == 3 && __GNUC_MINOR__ >= 4)
#    ifndef GCC_HASCLASSVISIBILITY
#      define GCC_HASCLASSVISIBILITY
#    endif
#  endif
#endif

#ifndef SWIGEXPORT
# if defined(_WIN32) || defined(__WIN32__) || defined(__CYGWIN__)
#   if defined(STATIC_LINKED)
#     define SWIGEXPORT
#   else
#     define SWIGEXPORT __declspec(dllexport)
#   endif
# else
#   if defined(__GNUC__) && defined(GCC_HASCLASSVISIBILITY)
#     define SWIGEXPORT __attribute__ ((visibility("default")))
#   else
#     define SWIGEXPORT
#   endif
# endif
#endif

/* calling conventions for Windows */
#ifndef SWIGSTDCALL
# if defined(_WIN32) || defined(__WIN32__) || defined(__CYGWIN__)
#   define SWIGSTDCALL __stdcall
# else
#   define SWIGSTDCALL
# endif
#endif

/* Deal with Microsoft's attempt at deprecating C standard runtime functions */
#if !defined(SWIG_NO_CRT_SECURE_NO_DEPRECATE) && defined(_MSC_VER) && !defined(_CRT_SECURE_NO_DEPRECATE)
# define _CRT_SECURE_NO_DEPRECATE
#endif

/* Deal with Microsoft's attempt at deprecating methods in the standard C++ library */
#if !defined(SWIG_NO_SCL_SECURE_NO_DEPRECATE) && defined(_MSC_VER) && !defined(_SCL_SECURE_NO_DEPRECATE)
# define _SCL_SECURE_NO_DEPRECATE
#endif

/* Deal with Apple's deprecated 'AssertMacros.h' from Carbon-framework */
#if defined(__APPLE__) && !defined(__ASSERT_MACROS_DEFINE_VERSIONS_WITHOUT_UNDERSCORES)
# define __ASSERT_MACROS_DEFINE_VERSIONS_WITHOUT_UNDERSCORES 0
#endif

/* Intel's compiler complains if a variable which was never initialised is
 * cast to void, which is a common idiom which we use to indicate that we
 * are aware a variable isn't used.  So we just silence that warning.
 * See: https://github.com/swig/swig/issues/192 for more discussion.
 */
#ifdef __INTEL_COMPILER
# pragma warning disable 592
#endif


/* Fix for jlong on some versions of gcc on Windows */
#if defined(__GNUC__) && !defined(__INTEL_COMPILER)
  typedef long long __int64;
#endif

/* Fix for jlong on 64-bit x86 Solaris */
#if defined(__x86_64)
# ifdef _LP64
#   undef _LP64
# endif
#endif

#include <jni.h>
#include <stdlib.h>
#include <string.h>


/* Support for throwing Java exceptions */
typedef enum {
  SWIG_JavaOutOfMemoryError = 1, 
  SWIG_JavaIOException, 
  SWIG_JavaRuntimeException, 
  SWIG_JavaIndexOutOfBoundsException,
  SWIG_JavaArithmeticException,
  SWIG_JavaIllegalArgumentException,
  SWIG_JavaNullPointerException,
  SWIG_JavaDirectorPureVirtual,
  SWIG_JavaUnknownError
} SWIG_JavaExceptionCodes;

typedef struct {
  SWIG_JavaExceptionCodes code;
  const char *java_exception;
} SWIG_JavaExceptions_t;


static void SWIGUNUSED SWIG_JavaThrowException(JNIEnv *jenv, SWIG_JavaExceptionCodes code, const char *msg) {
  jclass excep;
  static const SWIG_JavaExceptions_t java_exceptions[] = {
    { SWIG_JavaOutOfMemoryError, "java/lang/OutOfMemoryError" },
    { SWIG_JavaIOException, "java/io/IOException" },
    { SWIG_JavaRuntimeException, "java/lang/RuntimeException" },
    { SWIG_JavaIndexOutOfBoundsException, "java/lang/IndexOutOfBoundsException" },
    { SWIG_JavaArithmeticException, "java/lang/ArithmeticException" },
    { SWIG_JavaIllegalArgumentException, "java/lang/IllegalArgumentException" },
    { SWIG_JavaNullPointerException, "java/lang/NullPointerException" },
    { SWIG_JavaDirectorPureVirtual, "java/lang/RuntimeException" },
    { SWIG_JavaUnknownError,  "java/lang/UnknownError" },
    { (SWIG_JavaExceptionCodes)0,  "java/lang/UnknownError" }
  };
  const SWIG_JavaExceptions_t *except_ptr = java_exceptions;

  while (except_ptr->code != code && except_ptr->code)
    except_ptr++;

  jenv->ExceptionClear();
  excep = jenv->FindClass(except_ptr->java_exception);
  if (excep)
    jenv->ThrowNew(excep, msg);
}


/* Contract support */

#define SWIG_contract_assert(nullreturn, expr, msg) if (!(expr)) {SWIG_JavaThrowException(jenv, SWIG_JavaIllegalArgumentException, msg); return nullreturn; } else


#include <string>


#include <stdexcept>


#include <vector>
#include <stdexcept>


#include "ocr.h"


#ifdef __cplusplus
extern "C" {
#endif

SWIGEXPORT void JNICALL Java_ocrJNI_pthreadParams_1t_1src_1set(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jlong jarg2) {
  pthreadParams_t *arg1 = (pthreadParams_t *) 0 ;
  std::vector< cv::Mat * > *arg2 = (std::vector< cv::Mat * > *) 0 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(pthreadParams_t **)&jarg1; 
  arg2 = *(std::vector< cv::Mat * > **)&jarg2; 
  if (arg1) (arg1)->src = *arg2;
}


SWIGEXPORT jlong JNICALL Java_ocrJNI_pthreadParams_1t_1src_1get(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  jlong jresult = 0 ;
  pthreadParams_t *arg1 = (pthreadParams_t *) 0 ;
  std::vector< cv::Mat * > *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(pthreadParams_t **)&jarg1; 
  result = (std::vector< cv::Mat * > *)& ((arg1)->src);
  *(std::vector< cv::Mat * > **)&jresult = result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_ocrJNI_pthreadParams_1t_1blacklist_1set(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jstring jarg2) {
  pthreadParams_t *arg1 = (pthreadParams_t *) 0 ;
  char *arg2 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(pthreadParams_t **)&jarg1; 
  arg2 = 0;
  if (jarg2) {
    arg2 = (char *)jenv->GetStringUTFChars(jarg2, 0);
    if (!arg2) return ;
  }
  {
    if(arg2) {
      strncpy((char*)arg1->blacklist, (const char *)arg2, 128-1);
      arg1->blacklist[128-1] = 0;
    } else {
      arg1->blacklist[0] = 0;
    }
  }
  
  if (arg2) jenv->ReleaseStringUTFChars(jarg2, (const char *)arg2);
}


SWIGEXPORT jstring JNICALL Java_ocrJNI_pthreadParams_1t_1blacklist_1get(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  jstring jresult = 0 ;
  pthreadParams_t *arg1 = (pthreadParams_t *) 0 ;
  char *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(pthreadParams_t **)&jarg1; 
  result = (char *)(char *) ((arg1)->blacklist);
  if (result) jresult = jenv->NewStringUTF((const char *)result);
  return jresult;
}


SWIGEXPORT void JNICALL Java_ocrJNI_pthreadParams_1t_1whitelist_1set(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jstring jarg2) {
  pthreadParams_t *arg1 = (pthreadParams_t *) 0 ;
  char *arg2 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(pthreadParams_t **)&jarg1; 
  arg2 = 0;
  if (jarg2) {
    arg2 = (char *)jenv->GetStringUTFChars(jarg2, 0);
    if (!arg2) return ;
  }
  {
    if(arg2) {
      strncpy((char*)arg1->whitelist, (const char *)arg2, 128-1);
      arg1->whitelist[128-1] = 0;
    } else {
      arg1->whitelist[0] = 0;
    }
  }
  
  if (arg2) jenv->ReleaseStringUTFChars(jarg2, (const char *)arg2);
}


SWIGEXPORT jstring JNICALL Java_ocrJNI_pthreadParams_1t_1whitelist_1get(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  jstring jresult = 0 ;
  pthreadParams_t *arg1 = (pthreadParams_t *) 0 ;
  char *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(pthreadParams_t **)&jarg1; 
  result = (char *)(char *) ((arg1)->whitelist);
  if (result) jresult = jenv->NewStringUTF((const char *)result);
  return jresult;
}


SWIGEXPORT void JNICALL Java_ocrJNI_pthreadParams_1t_1OCR_1set(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jlong jarg2) {
  pthreadParams_t *arg1 = (pthreadParams_t *) 0 ;
  tesseract::TessBaseAPI *arg2 = (tesseract::TessBaseAPI *) 0 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(pthreadParams_t **)&jarg1; 
  arg2 = *(tesseract::TessBaseAPI **)&jarg2; 
  if (arg1) (arg1)->OCR = arg2;
}


SWIGEXPORT jlong JNICALL Java_ocrJNI_pthreadParams_1t_1OCR_1get(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  jlong jresult = 0 ;
  pthreadParams_t *arg1 = (pthreadParams_t *) 0 ;
  tesseract::TessBaseAPI *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(pthreadParams_t **)&jarg1; 
  result = (tesseract::TessBaseAPI *) ((arg1)->OCR);
  *(tesseract::TessBaseAPI **)&jresult = result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_ocrJNI_pthreadParams_1t_1lang_1set(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jstring jarg2) {
  pthreadParams_t *arg1 = (pthreadParams_t *) 0 ;
  char *arg2 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(pthreadParams_t **)&jarg1; 
  arg2 = 0;
  if (jarg2) {
    arg2 = (char *)jenv->GetStringUTFChars(jarg2, 0);
    if (!arg2) return ;
  }
  {
    if(arg2) {
      strncpy((char*)arg1->lang, (const char *)arg2, 64-1);
      arg1->lang[64-1] = 0;
    } else {
      arg1->lang[0] = 0;
    }
  }
  
  if (arg2) jenv->ReleaseStringUTFChars(jarg2, (const char *)arg2);
}


SWIGEXPORT jstring JNICALL Java_ocrJNI_pthreadParams_1t_1lang_1get(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  jstring jresult = 0 ;
  pthreadParams_t *arg1 = (pthreadParams_t *) 0 ;
  char *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(pthreadParams_t **)&jarg1; 
  result = (char *)(char *) ((arg1)->lang);
  if (result) jresult = jenv->NewStringUTF((const char *)result);
  return jresult;
}


SWIGEXPORT void JNICALL Java_ocrJNI_pthreadParams_1t_1conf_1set(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jlong jarg2) {
  pthreadParams_t *arg1 = (pthreadParams_t *) 0 ;
  std::vector< float > *arg2 = (std::vector< float > *) 0 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(pthreadParams_t **)&jarg1; 
  arg2 = *(std::vector< float > **)&jarg2; 
  if (arg1) (arg1)->conf = *arg2;
}


SWIGEXPORT jlong JNICALL Java_ocrJNI_pthreadParams_1t_1conf_1get(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  jlong jresult = 0 ;
  pthreadParams_t *arg1 = (pthreadParams_t *) 0 ;
  std::vector< float > *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(pthreadParams_t **)&jarg1; 
  result = (std::vector< float > *)& ((arg1)->conf);
  *(std::vector< float > **)&jresult = result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_ocrJNI_pthreadParams_1t_1interp_1set(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jlong jarg2) {
  pthreadParams_t *arg1 = (pthreadParams_t *) 0 ;
  std::vector< std::string > *arg2 = (std::vector< std::string > *) 0 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(pthreadParams_t **)&jarg1; 
  arg2 = *(std::vector< std::string > **)&jarg2; 
  if (arg1) (arg1)->interp = *arg2;
}


SWIGEXPORT jlong JNICALL Java_ocrJNI_pthreadParams_1t_1interp_1get(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  jlong jresult = 0 ;
  pthreadParams_t *arg1 = (pthreadParams_t *) 0 ;
  std::vector< std::string > *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(pthreadParams_t **)&jarg1; 
  result = (std::vector< std::string > *)& ((arg1)->interp);
  *(std::vector< std::string > **)&jresult = result; 
  return jresult;
}


SWIGEXPORT jlong JNICALL Java_ocrJNI_new_1pthreadParams_1t(JNIEnv *jenv, jclass jcls) {
  jlong jresult = 0 ;
  pthreadParams_t *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  result = (pthreadParams_t *)new pthreadParams_t();
  *(pthreadParams_t **)&jresult = result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_ocrJNI_delete_1pthreadParams_1t(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  pthreadParams_t *arg1 = (pthreadParams_t *) 0 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(pthreadParams_t **)&jarg1; 
  delete arg1;
}


SWIGEXPORT void JNICALL Java_ocrJNI_output_1result_1strResult_1set(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jlong jarg2) {
  output_result *arg1 = (output_result *) 0 ;
  std::vector< std::string > *arg2 = (std::vector< std::string > *) 0 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(output_result **)&jarg1; 
  arg2 = *(std::vector< std::string > **)&jarg2; 
  if (arg1) (arg1)->strResult = *arg2;
}


SWIGEXPORT jlong JNICALL Java_ocrJNI_output_1result_1strResult_1get(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  jlong jresult = 0 ;
  output_result *arg1 = (output_result *) 0 ;
  std::vector< std::string > *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(output_result **)&jarg1; 
  result = (std::vector< std::string > *)& ((arg1)->strResult);
  *(std::vector< std::string > **)&jresult = result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_ocrJNI_output_1result_1index_1set(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jlong jarg2) {
  output_result *arg1 = (output_result *) 0 ;
  std::vector< int > *arg2 = (std::vector< int > *) 0 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(output_result **)&jarg1; 
  arg2 = *(std::vector< int > **)&jarg2; 
  if (arg1) (arg1)->index = *arg2;
}


SWIGEXPORT jlong JNICALL Java_ocrJNI_output_1result_1index_1get(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  jlong jresult = 0 ;
  output_result *arg1 = (output_result *) 0 ;
  std::vector< int > *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(output_result **)&jarg1; 
  result = (std::vector< int > *)& ((arg1)->index);
  *(std::vector< int > **)&jresult = result; 
  return jresult;
}


SWIGEXPORT jlong JNICALL Java_ocrJNI_new_1output_1result(JNIEnv *jenv, jclass jcls) {
  jlong jresult = 0 ;
  output_result *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  result = (output_result *)new output_result();
  *(output_result **)&jresult = result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_ocrJNI_delete_1output_1result(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  output_result *arg1 = (output_result *) 0 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(output_result **)&jarg1; 
  delete arg1;
}


SWIGEXPORT void JNICALL Java_ocrJNI_readThreadParams(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jlong jarg2, jobject jarg2_) {
  pthreadParams_t *arg1 = (pthreadParams_t *) 0 ;
  output_result *arg2 = 0 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  (void)jarg2_;
  arg1 = *(pthreadParams_t **)&jarg1; 
  arg2 = *(output_result **)&jarg2;
  if (!arg2) {
    SWIG_JavaThrowException(jenv, SWIG_JavaNullPointerException, "output_result & reference is null");
    return ;
  } 
  readThreadParams(arg1,*arg2);
}


SWIGEXPORT void JNICALL Java_ocrJNI_initThreadParams(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jlong jarg2, jlong jarg3) {
  pthreadParams_t *arg1 = (pthreadParams_t *) 0 ;
  std::vector< cv::Mat * > *arg2 = 0 ;
  tesseract::TessBaseAPI *arg3 = (tesseract::TessBaseAPI *) 0 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(pthreadParams_t **)&jarg1; 
  arg2 = *(std::vector< cv::Mat * > **)&jarg2;
  if (!arg2) {
    SWIG_JavaThrowException(jenv, SWIG_JavaNullPointerException, "std::vector< cv::Mat * > const & reference is null");
    return ;
  } 
  arg3 = *(tesseract::TessBaseAPI **)&jarg3; 
  initThreadParams(arg1,(std::vector< cv::Mat * > const &)*arg2,arg3);
}


SWIGEXPORT void JNICALL Java_ocrJNI_initTess(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  std::vector< tesseract::TessBaseAPI * > *arg1 = 0 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(std::vector< tesseract::TessBaseAPI * > **)&jarg1;
  if (!arg1) {
    SWIG_JavaThrowException(jenv, SWIG_JavaNullPointerException, "std::vector< tesseract::TessBaseAPI * > & reference is null");
    return ;
  } 
  initTess(*arg1);
}


SWIGEXPORT jlong JNICALL Java_ocrJNI_recognizeLineAtomic(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  jlong jresult = 0 ;
  void *arg1 = (void *) 0 ;
  void *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(void **)&jarg1; 
  result = (void *)recognizeLineAtomic(arg1);
  *(void **)&jresult = result; 
  return jresult;
}


SWIGEXPORT jlong JNICALL Java_ocrJNI_ocr(JNIEnv *jenv, jclass jcls, jstring jarg1) {
  jlong jresult = 0 ;
  std::string arg1 ;
  output_result result;
  
  (void)jenv;
  (void)jcls;
  if(!jarg1) {
    SWIG_JavaThrowException(jenv, SWIG_JavaNullPointerException, "null string");
    return 0;
  } 
  const char *arg1_pstr = (const char *)jenv->GetStringUTFChars(jarg1, 0); 
  if (!arg1_pstr) return 0;
  (&arg1)->assign(arg1_pstr);
  jenv->ReleaseStringUTFChars(jarg1, arg1_pstr); 
  result = ocr(arg1);
  *(output_result **)&jresult = new output_result((const output_result &)result); 
  return jresult;
}


#ifdef __cplusplus
}
#endif

