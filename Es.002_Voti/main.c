//Ruggero Anthony
#include <stdio.h>
#include <stdlib.h>

#define DIM 3
#define DIM_MAX 20

/*Definire una struttura per memorizzare i dati degli studenti di una classe e dei voti nelle varie discipline:
Italiano, Matematica e Informatica.
Si scriva una funzione in C che, a partire da un vettore di studenti fornito come argomento,
determini la disciplina che ha la media più alta.*/

typedef struct {
    float italiano;
    float mate;
    float info;
    char nome[DIM_MAX];
    char cognome[DIM_MAX];
} Studenti;

void caricaStudente(Studenti v[]) {
    int k;

    for(k = 0; k < DIM; k++) {
        fflush(stdin);
        printf("Inserisci il nome studente: ");
        scanf("%s", v[k].nome);

        fflush(stdin);
        printf("Inserisci il cognome studente: ");
        scanf("%s", v[k].cognome);

        printf("Inserisci voto italiano: ");
        scanf("%s", v[k].italiano);

        printf("Inserisci voto informatica: ");
        scanf("%s", v[k].info);

        printf("Inserisci voto matematica: ");
        scanf("%s", v[k].mate);
    }
}

void mediaMaterie(Studenti v[], float mediaInf, float mediaMate, float mediaIta) {
    int k;
    float sommaIta, sommaMate, sommaInf;

    for(k = 0; k < DIM; k++){
        sommaInf = sommaInf + v[k].info;
        sommaIta = sommaIta + v[k].italiano;
        sommaMate = sommaMate + v[k].mate;
    }

    mediaInf = sommaInf / DIM;
    mediaIta = sommaIta / DIM;
    mediaMate = sommaMate / DIM;

}

int main() {
    Studenti v[DIM];
    float mediaInf, mediaMate, mediaIta;

    caricaStudente(v);
    mediaMaterie(v, mediaInf, mediaMate, mediaIta);

    if(mediaInf > mediaIta){
        if(mediaInf > mediaMate){
            printf("Info: ");
            printf("%.2f", mediaInf);
        }
    }if(mediaIta > mediaMate){
        if(mediaIta > mediaInf){
            printf("Italiano: ");
            printf("%.2f", mediaIta);
        }
    }if(mediaMate > mediaInf){
        if(mediaMate> mediaIta){
                printf("Mate: ");
            printf("%.2f", mediaMate);
        }
    }


    return 0;
}
