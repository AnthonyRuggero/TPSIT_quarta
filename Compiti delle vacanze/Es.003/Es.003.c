/*Per descrivere i pazienti di una clinica disponi del seguente tipo di dato:
Paziente
typedef struct
{
char nome[256] ;
char cognome[256] ;
int matricola;
int pressione[2]; // minima e massima
int temperature[3]; // temperature della mattina e pomeriggio e sera
float parcella; // in euro quello che deve al dottore
} Paziente; // Iniziale maiuscola
Scrivi i Prototipi,le chiamate e il codice delle seguenti specifiche:
1. definisci una variabile rossi di tipo paziente;
2. definisci un array di 20 pazienti di nome clinica e di tipo paziente;
3. imposta una procedura (prototipo) con il corretto passaggio dei parametri che permetta ad
un utente di inserire tutti dati di un paziente che è stato passato alla procedura;
4. imposta una procedura (prototipo) che stampa la pressione e la temperatura di un
paziente;
5. imposta una procedura (prototipo) che dato l&#39;indirizzo dell&#39;array clinica ed il numero di
pazienti che vi sono sulla lista, calcola il saldo totale della clinica;
6. imposta tutte le chiamate nel main che realizzino in sequenza i punti precedenti;
7. facoltativo: ora completa l&#39;esercizio scrivendo il codice di tutte le procedure.
*/

///Ruggero Anthony 4 A Rob

#include <stdio.h>
#include <stdlib.h>

#define MAXPAZIENTI 20

typedef struct{
    char nome[256];
    char cognome[256];
    int matricola;
    int pressione[2];
    int temperature[3];
    float parcella;
}Paziente;

void inserisciDati(Paziente *p){
    printf("Inserisci il nome del paziente: ");
    scanf("%s", p->nome);

    printf("Inserisci il cognome del paziente: ");
    scanf("%s", p->cognome);

    printf("Inserisci la matricola del paziente: ");
    scanf("%d", p->matricola);

    printf("Inserisci la pressione del paziente: (min-max)");
    scanf("%d", p->pressione[0]);
    scanf("%d", p->pressione[1]);

    printf("Inserisci le temperature del paziente: (3)");
    scanf("%d", p->temperature[0]);
    scanf("%d", p->temperature[1]);
    scanf("%d", p->temperature[2]);

    printf("Inserisci la parcella del paziente: ");
    scanf("%f", p->parcella);
}

void stampaTemp(Paziente *p){
    printf("Temperature: \n");
    for(int k = 0; k < 2; k++){
        printf("%d - ", p.temperature[k]);
    }
    printf("Pressione minima: %d", p.pressione[0]);
    printf("Pressione massima: %d", p.pressione[1]);
}

int saldoTotale(Paziente clinica[]){
    float totale;

    for(int k = 0; k < MAXPAZIENTI; k++){
        totale += clinica[k].parcella;
    }

}

int main(){
    Paziente rossi;
    Paziente clinica[MAXPAZIENTI];

    inserisciDati(&rossi);
    stampaTemp(&rossi);

    saldoTotale(clinica);

    return 0;
}
