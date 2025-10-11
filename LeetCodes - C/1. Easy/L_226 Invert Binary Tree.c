#include <stdio.h>
#include <stdlib.h>


struct TreeNode {
      int val;
      struct TreeNode *left;
      struct TreeNode *right;
  };
 
struct TreeNode* invertTree(struct TreeNode* root) {
    if ( root == NULL )
        return NULL;
    
    //if( root->left && root->right == NULL )
     //   return root;

    struct TreeNode* temp = root->left;
    root->left = root->right;
    root->right = temp;

    invertTree(root->left);
    invertTree(root->right);

    return root;
}

// Função para criar novo nó
struct TreeNode* newNode(int val) {
    struct TreeNode* node = (struct TreeNode*)malloc(sizeof(struct TreeNode));
    node->val = val;
    node->left = node->right = NULL;
    return node;
}

// Impressão em ordem (esquerda → raiz → direita)
void printInorder(struct TreeNode* root) {
    if (root == NULL) return;
    printInorder(root->left);
    printf("%d ", root->val);
    printInorder(root->right);
}

int main() {
    // Construindo a árvore root = [4,2,7,1,3,6,9]
    struct TreeNode* root = newNode(4);
    root->left = newNode(2);
    root->right = newNode(7);
    root->left->left = newNode(1);
    root->left->right = newNode(3);
    root->right->left = newNode(6);
    root->right->right = newNode(9);

    printf("Inorder antes de inverter: ");
    printInorder(root);
    printf("\n");

    // Invertendo a árvore
    root = invertTree(root);

    printf("Inorder depois de inverter: ");
    printInorder(root);
    printf("\n");

    return 0;
}