#define check_type(expr, type)  \
    ((__typeof(expr) *)0 == (type *)0)

int main()
{
    check_type(1, float);         //FAIL
    (__typeof(1)*)0 == (float*)0; //FAIL
    (int*)0 == (float*)0;         //OK
    return 0;
}

