
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct TreeNode {
     int val;
     struct TreeNode *left;
     struct TreeNode *right;
};

bool isSameTree(struct TreeNode* p, struct TreeNode* q);

struct TreeNode *newNode( int val ){
    struct TreeNode *node = (struct TreeNode*)malloc(sizeof(struct TreeNode));
    node->val = val;
    node->right = NULL;
    node->left = NULL;
};

int main () {

    struct TreeNode *root =  newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);

    bool ehIgual = isSameTree(root->left, root->right);

    if ( ehIgual == true ) {
        printf("É igual\n");
    } else {
        printf("Não é igual");
    }


    return 0;
}

bool isSameTree(struct TreeNode* p, struct TreeNode* q) {

    if ( p == NULL && q == NULL )
        return true;

    if ( p == NULL || q == NULL )
        return false;

    if ( p->val == q->val )
        return true;

    return isSameTree(p->left, q->left) && isSameTree(p->right, q->right);
}

/*
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };

bool isSameTree(struct TreeNode* p, struct TreeNode* q) {
    
    //Caso em que as árvores são nulas
    if ( p == NULL && q == NULL ) 
        return true;

    //Caso que um é NULO e o outro não, se V^V, entra acima
    if ( p == NULL || q == NULL  ) {
        return false;
    } 

    //Caso que os valores do nó analisado são diferetes
    if ( p->val != q->val )
    return false;

    //Analise as subárvores de baixo, false 1x = diferente
    return isSameTree(p->left, q->left) && isSameTree(p->right, q->right );

}
*/