/* File : ocr.i */
%module ocr
%include "std_string.i"
%include "std_vector.i"
%{
#include "ocr.h"
%}

/* Let's just grab the original header file here */
%include "ocr.h"

