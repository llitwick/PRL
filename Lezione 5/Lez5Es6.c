#include <stdio.h>
float approx_pi(int n){
    int i=1;
    int found=1;
    float ris=0;
    while(n>0){
        if(found){
            ris=ris+(4/(float)i);
            found=0;
            n--;
        }
        else{
            ris=ris-(4/(float)i);
            found=1;
            n--;
        }
        i=i+2;
    }
    return ris;
}
int main() {
    int n;
    scanf("%d", &n);
    printf("%.6f\n", approx_pi(n));
    return 0;
}