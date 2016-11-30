#include <stdio.h>
int main (void)
{
    char val;
    scanf ("%c", &val);
    val = val - 32;
    printf ("%c \n", val);
    return 0;
}