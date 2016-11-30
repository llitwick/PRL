#include <stdio.h>
int multipli(int N, int M) {
    int i=1;
    while(i<=N) {
        if(i%M==0) {
            printf("%d\n", i);
        }
        i++;
    }
    
}
int main() {
    int N;
    int M;
    scanf("%d", &N);
    scanf("%d", &M);
    multipli(N,M);
    return 0;
}
