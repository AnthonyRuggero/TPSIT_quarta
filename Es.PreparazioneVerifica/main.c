#include <stdio.h>
#include <stdlib.h>

int main(){
    int **v;
    int nc, nr;

    v = (int**) malloc(nr * sizeof(int*));
    for(int k = 0; k < nr; k++){
        v[k] = (int*) malloc(nc * sizeof(int));
    }

    printf("Inserisci il numero di righe: ");
    scanf("%d", &nr);
    printf("Inserisci il numero di colonne: ");
    scanf("%d", &nc);

    for(int r; r < nr; r++){
        for(int c; c < nc; c++){
            printf("Inserisci l'elemento [%d, %d]", r, c);
            scanf("%d", &v[r][c]);
        }
    }

    for(int r; r < nr; r++){
        for(int c; c < nc; c++){
            printf("%d", v[r][c]);
        }
        printf("\n");
    }

    for(k = 0; k < nr; k++){
       free(v[k]);
    }
    free(v);
    return 0;
}
