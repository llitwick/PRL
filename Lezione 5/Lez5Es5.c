#include <stdio.h>
float approx_sqrt(int z){
    float ris;
    if(z==0){
        ris=1.0000;
    }
    else{
        ris=(approx_sqrt(z-1)+(z/(approx_sqrt(z-1))))/2;
    }
    return ris;
}
int main() {
    int z;
    scanf("%d", &z);
    printf("%.4f\n", approx_sqrt(z));
    return 0;
}