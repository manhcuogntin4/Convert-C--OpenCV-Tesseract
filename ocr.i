/* File : ocr.i */
%module ocr
%include "std_string.i"
%include "various.i"
%include "std_vector.i"
%{
#include "ocr.h"
%}

%apply char **STRING_ARRAY { char ** }
// Instantiate templates used by example
/* Let's just grab the original header file here */
%include "ocr.h"

