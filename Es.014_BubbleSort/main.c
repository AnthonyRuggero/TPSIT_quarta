#include <stdio.h>
#include <stdlib.h>

#define DIM 5

/*void ordinaVettore(int vett[], int n){                  // bubble sort 1
    int sup, i, a;

    for(sup = n - 1; sup > 0; sup--){
        for(i = 0; i < sup; i++){
            if(vett[i + 1] < vett[i]){
                a = vett[i + 1];
                vett[i + 1] = vett[i];
                vett[i] = a;
            }
        }
    }
}*/

void caricaVettore(int vett[], int n) {
    int k;

    for(k = 0; k < n; k++) {
        printf("Inserisci un numero: ");
        scanf("%d", (vett + k));
    }
}

void bubbleSort(int vett[], int n) {
    int sup, i, a;

    for(sup = n - 1; sup > 0; sup--) {
        for(i = 0; i < sup; i++) {
            if(*(vett + i + 1) < *(vett + i)) {
                a = *(vett + i + 1);
                *(vett + i + 1) = *(vett + i);
                *(vett + i) = a;
            }
        }
    }
}

void stampa(int vett[], int n) {
    int k;

    for(k = 0; k < n; k++) {
        printf("%d ", *(vett + k));
    }
}

int main() {
    int vett[DIM];

    caricaVettore(vett, DIM);
    bubbleSort(vett, DIM);
    stampa(vett, DIM);
    return 0;
}
