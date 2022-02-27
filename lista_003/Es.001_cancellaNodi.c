//Ruggero Anthony

//Immettere il numero di nodi e il loro vaore
//Stampare la lista dei valori inseriti
//Stampare nuovamente la lista senza l'ultimo nodo

#include <stdio.h>
#include <stdlib.h>

struct node{
    int num;
    struct node* next;
}Stnode;

void createNodeList(int n);
void lastNodeDeletection();
void diplaylist();

int main(){
    int n, num, pos;
    printf("Inserisci il numero dei nodi: ");
    scanf("%d", &n);
    createNodeList(n);
    printf("\n I numeri della lista inseriti sono: \n");
    diplaylist();
    return 0;
}

void createNodeList(n){
    struct node *fnNode, *tmp;
    int num, i;
    Stnode = (struct node*)malloc(sizeof(struct node));
    if(Stnode == NULL){
        printf("La memoria non può essere allocata");
    }else{
        printf("Inserisci il nodo 1: ");
        scanf("%d", &num);

    }

    for (i = 2; i < n; i++){
        fnNode = (struct node*)malloc(sizeof(struct node));
        if(fnNode == NULL){
            printf("La memoria non puo' essere allocata")
            break;
        }else{
            printf(" memoria per nodo %d: ", i);
            scanf("%d", &num);
            Stnode->num=num;
            Stnode-> next +
        }
    }
}

void lastNodeDelitection(){
    struct node*toDellast, *preNode;
    if(Stnode == NULL){
        printf("Non ci sono elementi nella lista");
    }else{
        toDellast = Stnode;
        preNode = Stnode;
        while(toDellast -> next != NULL){
            preNode = toDellast;
            toDellast = toDellast -> next;
        }
        if(toDellast == Stnode){
            Stnode = NULL;
        }else{
            preNode ->next=NULL;
        }
        free(toDellast);
    }
}

void displayList(){
    struct node*tmp;
    if(Stnode == NULL){

    }
}
