#include <stdio.h>
int main () {
    int a[10], i=0;
    int h=9;
    int temp;
    while(i<10) {
        scanf("%d", &a[i]);
        if(a[i]%2==0)
            a[i]=a[i]/2;
        i++;
    }
    i=0;
    while(i<5) {
        temp=a[h];
        a[h]=a[i];
        a[i]=temp;
        i++;
        h--;
    }
    i=0;
    while(i<10) {
        printf("%d\n", a[i]);
        i++;
    }
    return 0;
}
