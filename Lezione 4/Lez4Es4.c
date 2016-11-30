#include <stdio.h>
int main () {
    int a[10], i=0;
    for(i=0; i<10; i++)
        scanf("%d", &a[i]);
    for(i=0; i<10; i++) {
        int succ=i+1;
        if(a[i]>=0 && a[i]%2==0)
            printf("%d\n", a[i]);
        else if(a[i]<0 && a[succ]>=0 && i!=9) 
            printf("%d\n", a[i]);
    }
    return 0;
}

