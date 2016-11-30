#include <stdio.h>
int count_larger(int x, int dim, int a[]){
    int i=0;
    int count=0;
    while(i<5){
        if(x<a[i]){
            count++;
        }
        i++;
    }
    return count;
}
int main() {
    int x;
    int i=0;
    int dim=5;
    int a[dim];
    scanf("%d", &x);
    while(i<5){
        scanf("%d", &a[i]);
        i++;
    }
    printf("%d", count_larger(x,dim,a));
    return 0;
}