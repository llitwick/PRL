#include <stdio.h>
int MCD(int N, int M){
    while(N!=M){     //formula del MCD
        if (N>M)
            N=N-M;
        else M=M-N;
    }
    return N;
}
int mcm(int N, int M) {
    int ris;
    ris=N*M/MCD(N, M);
    return ris;
}
int main() {
    int N, M;
    scanf("%d", &N);
    scanf("%d", &M);
    printf("%d\n", MCD(N, M));
    printf("%d\n", mcm(N, M));
    return 0;
}