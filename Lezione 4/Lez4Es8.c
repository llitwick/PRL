#include <stdio.h>
int main () {
    int val;
    int i=1;
    int ris;
    while(i<=10) {
        scanf("%d", &val);
        printf("%d\n", val*i);
        i++;
    }
    return 0;
}
