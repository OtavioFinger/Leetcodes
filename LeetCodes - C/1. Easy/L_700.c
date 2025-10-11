
#include <stdio.h>

// Definição da estrutura da Árvore
struct TreeNode {
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
};

// Função para criar um novo nó
struct TreeNode *newNode(int val) {
    struct TreeNode* node = (struct TreeNode*)malloc(sizeof(struct TreeNode));
    node->val = val;
    node->left = NULL;
    node->right = NULL;
    return node;
}

struct TreeNode* searchBST(struct TreeNode* root, int val);

int main() {

    struct TreeNode* root = newNode(4);
    root->left = newNode(2);
    root->right = newNode(7);
    root->left->left = newNode(1);
    root->left->right = newNode(3);

    free(root->left->left);
    free(root->left->right);
    free(root->left);
    free(root->right);
    free(root);

    return 0;
}
struct TreeNode* searchBST(struct TreeNode* root, int val){

    //A raíz é nula 
    if( root == NULL )
        return root;

    //O valor está na primeira raiz
    if( val == root->val )
        return root;

    if ( val < root->val ) {
        return searchBST(root->left, val);
    } else if ( val > root->val ) {
        return searchBST(root->right, val);
    }
    return root; //Gambiarra pra funcionar
}