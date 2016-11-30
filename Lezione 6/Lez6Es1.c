#include <stdio.h>
void diff_abs(float *a, float *b) {
    float c;
    c=*b;
    *b=*a;
    *a=c;
}
int main () {
    float a, b, c;
    scanf("%f", &a);
    scanf("%f", &b);
    c=a-b;
    printf("%.2f\n", c);
    diff_abs(&a,&b);
    c=a-b;
    printf("%.2f\n", c);
    return 0;
}