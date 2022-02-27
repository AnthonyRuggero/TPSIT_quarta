#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

#define LUNG 20
#define DIM 10

int chiediStringa(char s[]) {
    int n;

    printf("Scrivi una parola: ");
    gets(s);
    n = strlen(s);

    return n;
}

char chiediLettera(){
    char c;

    printf("Inserisci la lettera da cercare: ");
    scanf("%c", &c);

    return c;
}

bool cercaLettera(char s[], char lettera, int n) {
    int k = 0;
    bool presente = false;

    while(presente = false && k < n){
        if(s[k] == lettera){
            presente = true;
        }
    }

return presente;
}

int main() {
    int n;
    char parola[LUNG];
    char lettera;
    bool ok;

    n = chiediStringa(parola);
    lettera = chiediLettera();
    ok = cercaLettera(parola, lettera, DIM);

    if(ok == true){
        printf("La lettera %c e' presente almeno una volta.");
    }else{
        printf("La  lettera %c non e' presente.");
    }

    return 0;
}
