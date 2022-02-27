#include <stdio.h>
#include <stdlib.h>

typedef struct s_queue_node {
    int elemento;
    struct s_queue_node*next;

} Queue_node;

int is_empty(Queue_node*head) {
    if(head==NULL) return 1;
    else
        return 0;
}

void enqueue(Queue_node**head,Queue_node**tail,Queue_node*element) {
    if(is_empty(*head)) {
        *head=element;
    } else {
        (*tail)->next=element;
    }
    *tail=element;
    element->next=NULL;
}

Queue_node*dequeue(Queue_node**head,Queue_node**tail) {
    Queue_node*ret=*head;

    if(is_empty(*head)) {
        return NULL;
    } else
        *head=ret->next;

    if (*head==NULL)
        *tail=NULL;

    return ret;
}

Queue_node*dequeueVal(Queue_node**head,Queue_node**tail) {
    Queue_node*ret=*head;

    if(is_empty(*head)) {
        return NULL;
    } else
        *head=ret->next;

    if (*head==NULL)
        *tail=NULL;

    return ret->elemento;
}

int main() {
    Queue_node*head=NULL;
    Queue_node*tail=NULL;
    Queue_node*struct_return=NULL;
    Queue_node*element;
    int dato;
    int conta = 0;
    int dim;

    printf("quanti numeri vuoi inserire: ");
    scanf("%d",&dim);

    for(int k=0; k<dim; k++) { //inserimento dati nella coda
        printf("inserire elemento: ");
        scanf("%d",&dato);
        element=(Queue_node*)malloc(sizeof(Queue_node));
        element->elemento=dato;
        enqueue(&head,&tail,element);
        conta++;
    }

    int vett[conta]; //vettore per appoggiare i dati
    for(int k=0; k<conta; k++) {
        vett[k] = dequeueVal(&head,&tail);
    }

    for(int k=conta-1; k>=0; k--) { //inserimento dei dati nella coda ma al contrario
        element=(Queue_node*)malloc(sizeof(Queue_node));
        element->elemento = vett[k];
        enqueue(&head,&tail,element);
    }
    printf("valori: \n");
    while ((struct_return=dequeue(&head,&tail))!=NULL) {  //stampa e liberazione della memoria
        printf("%d  ",struct_return->elemento);
        free(struct_return);
    }
}
