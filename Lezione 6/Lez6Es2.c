#include <stdio.h>
void ordered_swap(int a, int b, int c) {
    if(a<b) {
        if(a<c){
            if(b<c) {
                printf("%d\n", a);
                printf("%d\n", b);
                printf("%d\n", c);
            }
            else {
                printf("%d\n", a);
                printf("%d\n", c);
                printf("%d\n", b);
            }
        }
    }
    if(b<a) {
        if(b<c) {
            if(a<c){
                printf("%d\n", b);
                printf("%d\n", a);
                printf("%d\n", c);
        }
            else {
                printf("%d\n", b);
                printf("%d\n", c);
                printf("%d\n", a);
            }
        }
    }
    if(c<a) {
        if(c<b) {
            if(a<b) {
                printf("%d\n", c);
                printf("%d\n", a);
                printf("%d\n", b);
            }
            else {
                printf("%d\n", c);
                printf("%d\n", b);
                printf("%d\n", a);
            }
        }
    }
}

    
int main () {
    int a, b, c;
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    ordered_swap(a,b,c);
    return 0;
}