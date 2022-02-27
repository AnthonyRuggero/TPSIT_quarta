//Ruggero Anthony

//Stampa i valori della lista in ordine inverso a quelli presi in input

#include <stdio.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct nodo {
    int num;
    struct nodo * next;
} Nodo;

void caricavett(int vett[], int n) { //presa in input dei valori numerici
    int k;
    for(k= 0; k < n; k++) {
        printf("cella[%d]: ", k);
        scanf("%d", &vett[k]);
    }
}

Nodo * crealista( int* v, int n) { //crea un nuovo nodo
    Nodo * head=NULL;
    Nodo *r=(Nodo*)malloc(sizeof(Nodo));
    Nodo * cur=head;
    for(int k=0; k< n; k++) {
        if(r==NULL)
            r=(Nodo*)malloc(sizeof(Nodo));

        r->num=*(v+k);
        if(head==NULL) {
            head= r;
            cur=r;
        }
        cur->next=r;
        cur=r;
        cur->next=NULL;
        r=NULL;
    }
    return head;
}

void stampaLista(Nodo*l) {  //procedura che stampa la lista la contrario
    if(l->next!=NULL)
        stampaLista(l->next);
    printf("%d\n",l-> num);
}

int main() {
    int dim;
    printf("quanti numeri da inserire: ");
    scanf("%d", &dim);
    int vett=(int*)malloc(dim*sizeof(int));
    caricavett(vett, dim);
    Nodo * head;
    head= crealista(vett, dim);
    stampaLista(head);
    return 0;
}
