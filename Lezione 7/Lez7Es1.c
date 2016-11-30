//###################
//#                 #
//#   INCOMPLETO    #
//#                 #
//###################
#include "stdio.h"
typedef enum {
    crocchette,
    scatolette,
    tonno_in_scatola
} tcibo;

typedef struct {
    int id;
    int eta;
    float peso;
    tcibo cibomangiato;
    
} gatto;

float media(int n, float peso[n]) {
    float somma=0;
    int i, m=0;
    for(i=0; i<10; i++) {
        if(peso[i]>0) {
            if(peso[i]>0) {
                m++;
                somma=somma+peso[i];
            }
        }
        else  {
            if(peso[i]<0) {
                m++;
                somma=somma+peso[i];
            }
        }
    }
    return somma/m;
}

int main() {
    int n, id[n], eta[n], cibo[n], i;
    float peso[n];
    scanf("%d", &n);
    for(i=0;i<n;i++) {
        scanf("%d", &id[i]); //Identificativo gatto
        scanf("%d", &eta[i]); //Età gatto
        scanf("%f", &peso[i]); //Peso gatto
        scanf("%d", &cibo[i]); //Intero cibo
    }
        for(i=0;i<n;i++) {
            if((int)eta<4 && (int)peso>(int)media(n, peso)) {
                printf("%d ", id[i]);
                if(cibo[i]==0)
                    printf("crocchette\n");
                if(cibo[i]==1)
                    printf("scatolette\n");
                else
                    printf("tonno\n");
        }
    }
}
