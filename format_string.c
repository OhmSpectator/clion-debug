#include <stdio.h>

#define PRINTF(format_string, ... ) \
    printf (format_string, ## __VA_ARGS__ );

int main()
{
    int number = 999;
    printf ("[%d]", number);
    PRINTF ("[%d]",  number); //No format string highlighting
    return 0;
}