//Ruggero Anthony

//Creare un puntatore char e uno int e stampa il loro valore e indirizzo

#include <stdio.h>
#include <stdlib.h>

int main(){
    char *caratteri;
    int *interi;

    puntInt = (int *) malloc(1*sizeof(int));       //allocazione dei puntatori
    puntC = (char *)malloc(1*sizeof(char));

    puntInt = 5;
    puntChar = 'A';

    printf("indirizzo: %d, valore: %d\n", &puntInt, puntInt);
    printf("indirizzo: %d, valore: %c\n", &puntChar, puntChar);

    return 0;
}
