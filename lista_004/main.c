//Ruggero Anthony

//Immettere il numero di nodi e il loro valore
//Stampare la lista e inserire nuovi nodi all'inizio della lista

#include <stdio.h>
#include <stdlib.h>

typedef struct nodo {
    int num;
    struct nodo * next;
} Nodo;

void caricavett(int vett[], int n) {
    int k;
    for(k= 0; k < n; k++) {
        printf("cella[%d]: ", k);
        scanf("%d", &vett[k]);
    }
}

Nodo * crealista( int* v, int n) {
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

void stampaLista(Nodo*l)
{
    printf("%d\n",l-> num);
    if(l->next!=NULL)stampaLista(l->next);
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

    int aggiunto;
    printf("valore da aggiungere: ");
    scanf("%d",&aggiunto);

    Nodo * head2 = (Nodo*)malloc(sizeof(Nodo));
    head2->num=aggiunto;
    head2->next=head;

    printf("lista con valore aggiunto\n");
    stampaLista(head2);

    return 0;
}
