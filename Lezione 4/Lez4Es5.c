#include <stdio.h>

int fib(int n) {
    if(n==0) return 0;
    if(n==1) return 1;
    return fib(n-1) + fib(n-2);
}
int x;
int n=0;
int main() {
    scanf("%d", &x);
    for(int i=0; i<=x; i++) {
        if(fib(i)<=x) 
            printf("%d\n", fib(i));
        else
            return 0;
    }
}