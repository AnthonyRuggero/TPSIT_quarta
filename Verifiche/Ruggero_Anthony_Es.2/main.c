#include <stdio.h>
#include <stdlib.h>

#define DIM 10

/*Ruggero Anthony
  Esercizio 2
*/

void leggiFile(char nomeFile[], float v[], int nMax, int *n) {
    FILE *fp;
    int k = 0;

    fp = fopen(nomeFile, "r"); //apertura del file in modalità di lettura
    if(fp == NULL) {
        printf("il file non esiste\n"); //controllo dell'esistenza del file
    } else {
        while((k < nMax) && (fscanf(fp, "%f", v[k])!=EOF)) { //lettura dell'elemento
            k++;
        }
        *n = k; //assegnazione del numero di elementi letti ad una variabile
        fclose(fp);
    }
}

int main(){
    float *elementiDaFile;
    float *elementiOutput;
    int n, k;

    elementiDaFile = (float*) malloc(DIM * sizeof(float)); //allocazione dinamica del vettore usato per leggere gli elementi da file

    leggiFile("verifica.dat", elementiDaFile, DIM, &n);

    elementiOutput = (float*) malloc((n - 1) * sizeof(float)); //allocazione dinamica del vettore di lavoro

    for(int k = 1; k < n; k++){
        *(elementiOutput + k) = *(elementiDaFile + k); //assegnamento degli elementi contenuti nel vettore elementiDaFile dal secondo in poi
    }

    printf("Array caricato da file: "); //output degli elementi letti da file
    for(k = 0; k < n; k++){
       printf("%d - ", elementiDaFile[k]);
    }

    printf("Array modificato: ");   //output degli elementi del vettore di lavoro
    for(k = 0; k < n - 1; k++){
        printf("%d - ", elementiOutput[k]);
    }



    return 0;
}
