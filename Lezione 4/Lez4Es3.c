#include <stdio.h>
int a[10], i;
int main() {
    for(i=0; i<10; i++)
        scanf("%d", &a[i]);
    for(i=1; i<9; i++) {
        if(a[i]==a[i+1]-a[i-1]) {
            printf("%d\n", i);
            return 0;
        }
    }
    printf("%d\n", -1);
    return 0;
}