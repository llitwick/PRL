#include <stdio.h>
int main (void)
{
    float val1;
    float val2;
    float val3;
    float val;
    scanf ("%f", &val1);
    scanf ("%f", &val2);
    scanf ("%f", &val3);
    val = (float)(val1 + val2 + val3)/3;
    printf ("%.3f \n", val);
    return 0;
}