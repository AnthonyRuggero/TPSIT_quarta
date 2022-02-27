//Ruggero Anthony
#include <stdio.h>
#include <stdlib.h>

#define LUNG 20
#define DIM 10

/* scrivi un programma che:
-definisca un tipo di dato Studente. Ogni studente è caratterizzato da un nome, cognome e una matricola.

-acqusiscai dati di 10 studenti e per ogni nuovo studente inserito, proceda ad un inserimento ordinato (lo scopo dell'esercizio è ordinare
gli studenti durante il processo di inserimento degli stessi e non dopo averli inseriti tutti con un algoritmo di ordinamenro).

-stampi i dati degli studenti*/

typedef struct {
    char nome[LUNG];
    char cognome[LUNG];
    int matricola;
} Studente;

int chiediNumeroStudenti(int dimMax) {
    int n;
    do {
        printf("Inserisci il numero di studenti: ");
        scanf("%d", &n);
    } while(n < 0 && n > 10);

    return n;
}

void chiediStudenti(Studente p[], int n) {
    int k;
    for(k = 0; k < n; k++) {
        printf("Inserisci il nome: ");
        scanf("%s", p[k].nome);
        printf("Inserisci il cognome: ");
        scanf("%s", p[k].cognome);
        printf("Inserisci la matricola: ");
        scanf("%d", &p[k].matricola);
    }
}

void stampaStudenti(Studente p[], int n) {
    int k;
    for(k = 0; k < n; k++) {
        printf("Nome: %s, Cognome: %s, Matricola: %d\n", p[k].nome, p[k].cognome, p[k].matricola);
    }
}

int main() {
    Studente v[DIM];
    int n;

    n = chiediNumeroStudenti(DIM);
    chiediStudenti(v, n);
    stampaStudenti(v, n);

    return 0;
}
