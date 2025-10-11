#include <stdio.h>
#include <stdlib.h>

//RODAR: valgrind --leak-check=full --show-leak-kinds=all ./main

// Estrutura da lista encadeada dada
struct ListNode {
    int val;
    struct ListNode *next;
};

// Função que cria novos nodos
struct ListNode* newNode( int val ) {
    struct ListNode* node = (struct ListNode*)malloc(sizeof(struct ListNode));
    node->val = val;
    node->next = NULL;
    return node;
}

struct ListNode* sortList(struct ListNode* head);
struct ListNode* encontrarMeio(struct ListNode* head);
struct ListNode* merge(struct ListNode* esquerda, struct ListNode* direita);

int main(int argc, char const *argv[]){

    struct ListNode* head = newNode(4);
    head->next = newNode(2);
    head->next->next = newNode(1);
    head->next->next->next = newNode(3);

    printf("Lista original:\n");
   
    struct ListNode* ponteiro = head;;

    while ( ponteiro ) {
        printf("%d -> ", ponteiro->val);
        ponteiro = ponteiro->next;
    }
    printf("NULL\n");

    head = sortList(head); //Faz O MERGE SORT

    printf("Lista ordenada:\n");
   
    ponteiro = head; //guarda a referência da cabeça
    while ( ponteiro ) { 
        printf("%d -> ", ponteiro->val);
        ponteiro = ponteiro->next;
    }
    printf("NULL\n");

    //Agora dar free na memória pro VALGRIND
    struct ListNode* temp;
    ponteiro = head;
    while ( ponteiro != NULL ) {
        temp = ponteiro;
        ponteiro = ponteiro->next;
        free(temp);
    }

    return 0;
}

//Função principal do código
struct ListNode* sortList(struct ListNode* head) {

        //Caso base: Lista NULA ou UM SÓ NODO
        if ( head == NULL || head->next == NULL )
            return head;
        
        //Divide a lista em duas
        struct ListNode* meio = encontrarMeio(head);

        //Ordenada cada metade recursivamente
        struct ListNode* esquerda = sortList(head);
        struct ListNode* direita = sortList(meio);
        
        return merge(esquerda, direita);
}

//Função que encontra o meio da Lista Encadeada
struct ListNode* encontrarMeio(struct ListNode* head) {
    
    struct ListNode* mid = head;
    struct ListNode* praFrente = head->next;

    while( praFrente && praFrente->next != NULL ) {
        mid = mid->next; //um em um
        praFrente = praFrente->next->next; //dois em dois
    }

    struct ListNode* meio = mid->next;
    mid->next = NULL; //tira o ponteiro pra outra metade
    return meio;
}

//Faz a junção das metades ordenadas recursivamente
struct ListNode* merge(struct ListNode* esquerda, struct ListNode* direita) {

    struct ListNode* head = NULL;
    struct ListNode* ultimo = NULL;

    while( esquerda && direita ) { //enquanto ponteiros diferentes de NULO
        struct ListNode* menor; // usado pra comparar entre as listas esq e dir, não necessariamente é o menor da lista

        if( esquerda->val < direita->val ) { //Se esquerda->val MENOR que direita->val
            menor = esquerda;
            esquerda = esquerda->next; //passa para o próximo elemento
        } else {
            menor = direita;
            direita = direita->next; //passa para o próximo elemento
        }

        if ( head == NULL ) { //Primeiro caso, onde ainda não há elementos
            head = menor;
            ultimo = menor; 
        } else {  // Conecta o nó no final da lista já formada
            ultimo->next = menor;
            ultimo = ultimo->next; //atualiza o último
        }
    }

    //Se sobrar algum elementos a lista, concatena
    if ( esquerda != NULL )
        ultimo->next = esquerda;
    if ( direita != NULL )
        ultimo->next = direita;

    return head;
}
