//Ruggero Anthony

//Creare e caricare una matrice e al termine delle operazioni deallocarla

#include <stdio.h>
#include <stdlib.h>

int main() {
    int nc,nr;
    int i;

    printf("inserisci il numero di righe: ");
    scanf("%d",&nr);
    printf("inserisci il numero di colonne: ");
    scanf("%d",&nc);

    int **mat = (int**)malloc(nr*sizeof(int*)); //allocazione dinamica della matrice
    for(i=0; i<nr; i++) {
        mat[i] = (int*)malloc(nc*sizeof(int));
    }

    for(i=0; i<nr; i++) {          //caricamento della matrice
        for(int k=0; k<nc; k++) {
            printf("metti numero: ");
            scanf("%d",&mat[i][k]);
        }
    }

    for(i=0; i<nr; i++) {     //stampa della matrice
        for(int k=0; k<nc; k++) {
            printf("%d ",mat[i][k]);
        }
        printf("\n");
    }

    free(mat);    //deallocaione della memoria
    return 0;
}
