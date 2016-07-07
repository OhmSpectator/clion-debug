#include "macro.h"

#undef macro
#define macro(arg1, arg2) \
    (arg1, arg2)

int main()
{
    macro(1, 2); //FAIL
    return 0;
}



