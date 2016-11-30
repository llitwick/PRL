#include <stdio.h>
int main() {
    int a1[5];
    int a2[5];
    int i=0;
    int a[5];
    while(i < 10) {
        if(i < 5) {
            scanf("%d", &a1[i]);
        }
        else {
            scanf("%d", &a2[i-5]);
        }
        i++;
    }
    printf("[%d,%d,%d,%d,%d]\n", a1[0], a1[1], a1[2], a1[3], a1[4]);
    printf("[%d,%d,%d,%d,%d]\n", a2[0], a2[1], a2[2], a2[3], a2[4]);
    a[0]=a2[0] + a1[0];
    a[1]=a2[1] + a1[1];
    a[2]=a2[2] + a1[2];
    a[3]=a2[3] + a1[3];
    a[4]=a2[4] + a1[4];
    printf("[%d,%d,%d,%d,%d]\n", a[0], a[1], a[2], a[3], a[4]);
    return 0;
}