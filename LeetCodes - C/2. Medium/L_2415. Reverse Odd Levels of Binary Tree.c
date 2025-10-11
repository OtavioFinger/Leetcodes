#include <stdio.h>
#include <stdlib.h>

  struct TreeNode {
      int val;
     struct TreeNode *left;
      struct TreeNode *right;
  };
 

 void trocaNodos(struct TreeNode* nodoEsq, struct TreeNode* nodoDir, int level) {

    if( nodoEsq == NULL || nodoDir == NULL) {
         return;
    }

    // Se o nível for ímpar, troca os valores
    if ( level % 2 == 1 ) {
        int temp = nodoEsq->val;
        nodoEsq->val = nodoDir->val;
        nodoDir->val = temp;
    }

    //Passa a próxima subárvore e aumenta nível
    trocaNodos(nodoEsq->left, nodoDir->right, level + 1);
    trocaNodos(nodoEsq->right, nodoDir->left, level + 1);

 }
struct TreeNode* reverseOddLevels(struct TreeNode* root) {
    if( root == NULL )
        return NULL;

    trocaNodos(root->left, root->right, 1);

    return root;
}

// Função auxiliar para criar um novo nodo
struct TreeNode* novoNodo(int val) {
    struct TreeNode* node = (struct TreeNode*)malloc(sizeof(struct TreeNode));
    node->val = val;
    node->left = NULL;
    node->right = NULL;
    return node;
}

// Impressão em ordem (inorder)
void printInOrder(struct TreeNode* root) {
    if (root == NULL)
        return;
    printInOrder(root->left);
    printf("%d ", root->val);
    printInOrder(root->right);
}

int main() {

    struct TreeNode* root = novoNodo(2);
    root->left = novoNodo(3);
    root->right = novoNodo(5);
    root->left->left = novoNodo(8);
    root->left->right = novoNodo(13);
    root->right->left = novoNodo(21);
    root->right->right = novoNodo(34);

    printf("Árvore original (inorder): ");
    printInOrder(root);
    printf("\n");

    reverseOddLevels(root);

    printf("Árvore após reversão dos níveis ímpares (inorder): ");
    printInOrder(root);
    printf("\n");

    return 0;
}