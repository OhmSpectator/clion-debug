#define macro(arg1) \
    (arg1)

#undef macro
#define macro(arg1, arg2) \
    (arg1, arg2)

int main()
{
    macro(1, 2); //Highlight that macro has too many arguments (use previous definition)
    return 0;
}



