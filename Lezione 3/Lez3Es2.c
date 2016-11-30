#include <stdio.h>
int main (void)
{
    float C;
    float F;
    scanf ("%f", &C);
    F =(float) C * 1.80 + 32;
    printf ("%.2f \n", F);
    return 0;
}