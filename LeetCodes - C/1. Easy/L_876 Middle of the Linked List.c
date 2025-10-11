#include <stdio.h>
#include <stdlib.h>

struct ListNode {
    int val;
    struct ListNode *next;
};

struct ListNode* novoNo(int val) {
    struct ListNode* no = malloc(sizeof(struct ListNode));
    no->val = val;
    no->next = NULL;
    return no;
}

struct ListNode* middleNode(struct ListNode* head);

struct ListNode* criarLista() {
    struct ListNode *head = novoNo(1);
    struct ListNode *atual = head;

    for (int i = 2; i <= 6; i++) {
        atual->next = novoNo(i);
        atual = atual->next;
    }

    return head;
}

void imprimirLista(struct ListNode* head) {
    while (head != NULL) {
        printf("%d -> ", head->val);
        head = head->next;
    }
    printf("NULL\n");
}

int main() {
    struct ListNode* lista = criarLista();

    printf("Lista: ");
    imprimirLista(lista);

    struct ListNode* meio = middleNode(lista);
    if ( meio != NULL )
        printf("Elemento do meio: %d\n", meio->val);

    return 0;
}


struct ListNode* middleNode(struct ListNode* head) {

    
    int qtd = 0;
    struct ListNode* actual = head;

    while ( actual != NULL ) {
        qtd++;
        actual = actual->next;
    }

    // Vê a metade dos nodos, 5 / 2 = 2    6 / 2 = 3
    int mid = qtd / 2;
    actual = head;

    // Anda mid passos, começa do 0
    for (int i = 0; i < mid; i++) {
        actual = actual->next;
    }

    return actual;
}