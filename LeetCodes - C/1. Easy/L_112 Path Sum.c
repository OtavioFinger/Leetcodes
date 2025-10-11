#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


// Definição do nó da árvore
struct TreeNode {
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
};

// Função auxiliar para criar um nó
struct TreeNode* newNode(int val) {
    struct TreeNode* node = (struct TreeNode*)malloc(sizeof(struct TreeNode));
    node->val = val;
    node->left = node->right = NULL;
    return node;
}

bool hasPathSum(struct TreeNode* root, int targetSum) {
    
    //Caso em que a root é NULA
    if ( root == NULL )
        return false;

    //Caso da folha
    if ( root->left == NULL && root->right == NULL )
        return (root->val == targetSum);

    //Diminui o target
    int restoTarget = targetSum - root->val;

    //Se o último val da esq ou direita bate com o resto
    return hasPathSum(root->left, restoTarget) || hasPathSum(root->right, restoTarget);
}   

int main() {
    // Construindo a árvore do exemplo
    struct TreeNode* root = newNode(5);
    root->left = newNode(4);
    root->right = newNode(8);
    root->left->left = newNode(11);
    root->right->left = newNode(13);
    root->right->right = newNode(4);
    root->left->left->left = newNode(7);
    root->left->left->right = newNode(2);
    root->right->right->right = newNode(1);

    int targetSum = 22;

    if ( hasPathSum(root, targetSum) ) {
        printf("true\n");
    } else {
        printf("false\n");
    }

    return 0;
}

