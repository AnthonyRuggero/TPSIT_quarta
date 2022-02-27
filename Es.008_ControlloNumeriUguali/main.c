//Ruggero Anthony

//Controlla se ci sono numeri uguali nel vettore e fai la somma dei numeri che non sono ripetuti

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main() {
    int dim;
    printf("dimensione del vettore: ");
    scanf("%d", &dim);

    float *vet = (float*)malloc(dim*sizeof(float));

    float *p;  //puntatore di appoggio

    for(p = vet; p < vet + dim; p++) {    //inizializzazione vettore con aritmetica dei puntatori
        printf("metti numero: ");
        scanf("%f",p);
    }

    float somma = 0;
    bool uguale=false;

    for(int k = 0; k < dim; k++) {
        uguale = false;

        for(int i = 0; i < k; i++) {
            if(i != k) {
                if(vet[k] == vet[i]) {
                    printf("numero uguale: %.1f\n",vet[k]);
                    uguale = true;
                }
            }

        }
        if(uguale == false)
            somma += vet[k];
    }

    printf("la somma degli elementi disgiunti: %f",somma);
    free(vet);


    return 0;
}
