#include <stdio.h>
int n;
int i=0;
int k;
int main() {
    scanf("%d", &n);
    while(i<n) {
        for(k=0; k<n; k++)
            printf("*");
    printf("\n");
    n=n-2;
    }
}