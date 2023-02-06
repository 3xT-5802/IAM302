#define BUILD_DLL
#include "my_math.h"

extern "C" {
    MATH_EXPORTS int __stdcall summation(int a, int b) {
        int s = 0;
        for (int i = a; i <= b; i++)
        {
            s += i;
        }
        return s;
    }
    MATH_EXPORTS int __stdcall product(int a, int b) {
        int s = 1;
        for (int i = a; i <= b; i++)
        {
            s *= i;
        }
        return s;
    }
}