
#include <stdio.h>
#include <stdlib.h>

struct ListNode* reverseList(struct ListNode* head);

struct ListNode {
    int val;
   struct ListNode *next;
};

int main() {

    struct ListNode* n1 = (struct ListNode*)malloc(sizeof(struct ListNode));
    struct ListNode* n2 = (struct ListNode*)malloc(sizeof(struct ListNode));
    struct ListNode* n3 = (struct ListNode*)malloc(sizeof(struct ListNode));
    struct ListNode* n4 = (struct ListNode*)malloc(sizeof(struct ListNode));

    n1->val = 1; n1->next = n2;
    n2->val = 2; n2->next = n3;
    n3->val = 3; n3->next = n4;
    n4->val = 4; n4->next = NULL;

    printf("Lista original: ");
    struct ListNode* temp = n1;
    while (temp != NULL) {
        printf("%d -> ", temp->val);
        temp = temp->next;
    }
    printf("NULL\n");

    struct ListNode* reversed = reverseList(n1);
 
    printf("Lista invertida: ");
    temp = reversed;
    while (temp != NULL) {
        printf("%d -> ", temp->val);
        temp = temp->next;
    }
    printf("NULL\n");

 
    while (n1 != NULL) {
        struct ListNode* aux = n1;
        n1 = n1->next;
        free(aux);
    }

    while (reversed != NULL) {
        struct ListNode* aux = reversed;
        reversed = reversed->next;
        free(aux);
    }
        
    return 0;
}

struct ListNode* reverseList(struct ListNode* head) {

    struct ListNode* newHead = NULL;

while( head != NULL) {

    struct ListNode* newNode = (struct ListNode*)malloc(sizeof(struct ListNode));

    newNode->val = head->val;

    newNode->next = newHead;
    newHead = newNode;

    head = head->next;
}
return newHead;
}