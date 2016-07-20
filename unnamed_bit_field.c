typedef int digit_t; //Warning: Type 'digit_t' in never used

struct bit_struct{
    int b: 6;
    digit_t: 1; //Error: Explicit type is required here
};

int main()
{
    struct bit_struct a;
    a.b = 0;
    return a.b;
}