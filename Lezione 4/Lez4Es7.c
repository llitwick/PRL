#include <stdio.h>
int h;
int l;
int i;
int k;
int main() {
    scanf("%d", &h);
    scanf("%d", &l);
    for(i=0; i<h; i++) {
        for(k=0; k<l; k++)
        if(i==0 || i==(h-1))
            printf("*");
        else if(k==0 || k==(l-1))
            printf("*");
        else printf(" ");
        printf("\n");
    }
    return 0;
}