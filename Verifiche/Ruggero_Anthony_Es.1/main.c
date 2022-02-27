#include <stdio.h>
#include <stdlib.h>

/*Ruggero Anthony
  Esercizio 1
*/

int main() {
    float **mat;
    int nr, nc, c, r, k;
    float *vet;
    float max;

    printf("Inserisci il numero di righe: "); //richiesta di input del numero di righe
    scanf("%d", &nr);
    printf("Inserisci il numero di colonne: "); //richiesta di input del numero di colonne
    scanf("%d", &nc);

    mat = (float**) malloc(nr * sizeof(float*)); //allocazione dinamica della matrice
    for(k = 0; k < nr; k++) {
        mat[k] = (float*) malloc(nc * sizeof(float));
    }

    vet = (float*) malloc(nr * sizeof(float)); //allocazione dinamica del vettore che conterrà i numeri maggiori di ogni riga

    for(r = 0; r < nr; r++) {
        for(c = 0; c < nc; c++) {
            printf("Inserisci un elemento: "); //caricamento della matrice
            scanf("%f", &mat[r][c]);
        }
    }

    k = 0;
    for(r = 0; r < nr; r++) {
        for(c = 0; c < nc; c++) {
            if(mat[r][c] > max) {
                max = mat[r][c];
            }
            *(vet + k) = max;
            k++;
        }
    }

    for(k = 0; k < nr; k++){
       printf("%.2f   ", vet[k]);
    }

    free(vet);  //deallocazione del vettore
    for(k = 0; k < nr; k++) {   //deallocazione della matrice
        free(mat[k]);
    }
    free(mat);

    return 0;
}
