/* copied from cutorch */
#ifndef THC_GENERIC_FILE
#error "You must define THC_GENERIC_FILE before including THGenerateFloatType.h"
#endif

#define real float
#define accreal float
#define Real Float
#define CReal Cuda
#define THC_REAL_IS_FLOAT
#line 1 THC_GENERIC_FILE
#include THC_GENERIC_FILE
#undef real
#undef accreal
#undef Real
#undef CReal
#undef THC_REAL_IS_FLOAT

#ifndef THCGenerateAllTypes
#undef THC_GENERIC_FILE
#endif

