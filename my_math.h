#ifndef _MY_MATH_H
#define _MY_MATH_H

#ifndef MATH_EXPORTS
    //We are building DLL
    #ifndef BUILD_DLL
        #define MATH_EXPORTS __declspec(ddlexport)
    #else
        //We are consuming DLL
        #pragma comment(lib, "my_math.lib")
        #define MATH_EXPORTS __declspec(ddlimport)
    #endif//End of BUILD_DLL
#endif//End of MATH_EXPORTS

#ifdef __cplusplus
    extern "C" {
#endif
//At this point MATH_EXPORTS is defined
    MATH_EXPORTS int __stdcall summation(int a, int b);
    MATH_EXPORTS int __stdcall product(int a, int b);
#ifdef __cplusplus  
    }
#endif
#endif //End of file _MY_MATH_H

