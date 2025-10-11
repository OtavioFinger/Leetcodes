#include <stdio.h>
#include <stdlib.h>


  struct TreeNode {
      int val;
      struct TreeNode *left;
      struct TreeNode *right;
  };
 
struct TreeNode* pruneTree(struct TreeNode* root);

struct TreeNode* criaNode( int val ) {

    struct TreeNode *newNode = (struct TreeNode *)malloc(sizeof(struct TreeNode));
    newNode->val = val;
    return newNode;
}

int main() {

    struct TreeNode *root = criaNode(1);
    root->left = NULL;
    root->right = criaNode(1);
    root->right->left = criaNode(0);
    root->right->right = criaNode(1);

    return 0;
}

struct TreeNode* pruneTree(struct TreeNode* root) {
    //Vai percorrendo a esquerda
    if ( root->left != NULL ) {
        root->left = pruneTree(root->left);
    } //Vai percorrendo a direita
    
    if ( root->right != NULL ) {
        root->right = pruneTree(root->right);
    } //Se é a folha
    
    if ( root->right == NULL && root->left == NULL && root->val == 0 ) {
        return NULL;
    }
    
    return root; //Retorna o próprio nó, não removido
}