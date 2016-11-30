#include <stdio.h>
float media (int a[10]);
int n;
int main () {
        int x;
    int a[10], i=0;
    for(i=0; i<10; i++) {
        scanf("%d", &x);
        a[i]=x;
        }
   
    printf("%.2f", media(a));
    return 0;
}

float media(int a[10]) {
         float somma=0;
         int i, n=0;
        for(i=0; i<10; i++) {
        if(a[9]>0) {
                if(a[i]>0) {
                        n++;
                        somma=somma+a[i];
                         }
                }
    else  {
        if(a[i]<0) {
                        n++;
                somma=somma+a[i];
                 } 
                }
        }
        return somma/n;
}
