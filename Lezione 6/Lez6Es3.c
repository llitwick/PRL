#include <stdio.h>
#include <stdlib.h>
int *fill(int N, int a[]) {
    int i;
    for(i=0;i<N;i++) {
        a[i]=5*(i+1);
    }
    return a;
}
int main () {
    int N, i;
    int *a;
    scanf("%d", &N);
    a=malloc(N*sizeof(int));
    a=fill(N,a);
    if(a!=NULL) {
        for(i=0;i<N;i++)
            printf("%d\n", a[i]);
    }
    free(a);
    return 0;
}