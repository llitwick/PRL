#include <stdio.h>
int main (void)
{
    int i;
    int x;
    int fact=1;
    scanf("%d",&x);
    if(x==0)
        printf("0\n");
    else{
        for(i=1; i<x+1; i++) fact = fact * i;
        printf("%d\n", fact);
    }
    return 0;
}