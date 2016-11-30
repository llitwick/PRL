#include <stdio.h>
float sum_pow(int n, float x) {
    int i;
    int j;
    float sum=0;
    float ris=0;
    for(i=0; i<=n; i++) {
        if(i==0)
            sum=1;
        else {
            ris=1;
            for(j=1; j<=i; j++) {
                ris=ris*x;
            }
            sum=sum+ris;
        }
    }
    return sum;
}
int main() {
    int n;
    float x;
    scanf("%d", &n);
    scanf("%f", &x);
    printf("%.2f\n", sum_pow(n, x));
    return 0;
}