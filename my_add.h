//
// MATLAB Compiler: 6.5 (R2017b)
// Date: Tue May  8 21:30:58 2018
// Arguments:
// "-B""macro_default""-W""cpplib:my_add""-T""link:lib""-d""D:\Study\Code\MATLAB
// \my_add\for_testing""-v""D:\Study\Code\MATLAB\my_add.m"
//

#ifndef __my_add_h
#define __my_add_h 1

#if defined(__cplusplus) && !defined(mclmcrrt_h) && defined(__linux__)
#  pragma implementation "mclmcrrt.h"
#endif
#include "mclmcrrt.h"
#include "mclcppclass.h"
#ifdef __cplusplus
extern "C" {
#endif

/* This symbol is defined in shared libraries. Define it here
 * (to nothing) in case this isn't a shared library. 
 */
#ifndef LIB_my_add_C_API 
#define LIB_my_add_C_API /* No special import/export declaration */
#endif

/* GENERAL LIBRARY FUNCTIONS -- START */

extern LIB_my_add_C_API 
bool MW_CALL_CONV my_addInitializeWithHandlers(
       mclOutputHandlerFcn error_handler, 
       mclOutputHandlerFcn print_handler);

extern LIB_my_add_C_API 
bool MW_CALL_CONV my_addInitialize(void);

extern LIB_my_add_C_API 
void MW_CALL_CONV my_addTerminate(void);

extern LIB_my_add_C_API 
void MW_CALL_CONV my_addPrintStackTrace(void);

/* GENERAL LIBRARY FUNCTIONS -- END */

/* C INTERFACE -- MLX WRAPPERS FOR USER-DEFINED MATLAB FUNCTIONS -- START */

extern LIB_my_add_C_API 
bool MW_CALL_CONV mlxMy_add(int nlhs, mxArray *plhs[], int nrhs, mxArray *prhs[]);

/* C INTERFACE -- MLX WRAPPERS FOR USER-DEFINED MATLAB FUNCTIONS -- END */

#ifdef __cplusplus
}
#endif


/* C++ INTERFACE -- WRAPPERS FOR USER-DEFINED MATLAB FUNCTIONS -- START */

#ifdef __cplusplus

/* On Windows, use __declspec to control the exported API */
#if defined(_MSC_VER) || defined(__MINGW64__)

#ifdef EXPORTING_my_add
#define PUBLIC_my_add_CPP_API __declspec(dllexport)
#else
#define PUBLIC_my_add_CPP_API __declspec(dllimport)
#endif

#define LIB_my_add_CPP_API PUBLIC_my_add_CPP_API

#else

#if !defined(LIB_my_add_CPP_API)
#if defined(LIB_my_add_C_API)
#define LIB_my_add_CPP_API LIB_my_add_C_API
#else
#define LIB_my_add_CPP_API /* empty! */ 
#endif
#endif

#endif

extern LIB_my_add_CPP_API void MW_CALL_CONV my_add(int nargout, mwArray& c, const mwArray& a, const mwArray& b);

/* C++ INTERFACE -- WRAPPERS FOR USER-DEFINED MATLAB FUNCTIONS -- END */
#endif

#endif
