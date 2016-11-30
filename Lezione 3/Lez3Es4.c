#include <stdio.h>
int main (void)
{
    int val1;
    int val2;
    int val3;
    scanf ("%d", &val1);
    scanf ("%d", &val2);
    scanf ("%d", &val3);
    if (val1>val2 && val1>val3) {
        printf ("%d \n",val1);
    }
    else if (val2>val1 && val2>val3) {
        printf("%d \n",val2);
    }
    else
        printf ("%d \n",val3);
    return 0;
}