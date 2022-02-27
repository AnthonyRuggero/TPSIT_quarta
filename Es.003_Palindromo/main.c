#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define LUNG 30

void leggiStringa(char s[], int *n) {
    printf("Scrivi una stringa: ");
    gets(s);
    n = strlen(s);
}

bool palindromo(char s[], int n) {
    bool ok = false;
    int k = 0;
    int i = n - 1;

    while(k < n - 1 && ok == false) {
        if(s[k] != s[i]) {
            ok = true;
        } else {
            ok = false;
        }
        k++;
        i--;
    }
    return ok;
}

int main() {
    char s[LUNG];
    int n;
    bool ok;

    leggiStringa(s, &n);
    ok = palindromo(s, n);

    if(ok == true){
        printf("Non e' palindromo");
    }else{
        printf("e' palindromo");
    }

    return 0;
}
