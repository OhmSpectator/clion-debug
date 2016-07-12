int main()
{
    (int*)0 == (float*)0;         //Parsed ok
    (__typeof(1)*)0 == (float*)0; //Report syntax errors
    return 0;
}

