#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

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

bool isBalanced(struct TreeNode* root);
int calcHeightLeft(struct TreeNode* root);
int calcHeightRight(struct TreeNode* root);

int main() {
  
    struct TreeNode* root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);

    if (isBalanced(root)) {
        printf("A árvore está balanceada.\n");
    } else {
        printf("A árvore NÃO está balanceada.\n");
    }

    free(root->left->left);
    free(root->left);
    free(root->right);
    free(root);

    return 0;
}

// Calcula altura da subárvore esquerda (recursiva)
int calcHeightLeft(struct TreeNode* root) {
    if ( root == NULL ) {
        return 0;
    } else {
        int left = calcHeightLeft(root->left);
        int right = calcHeightLeft(root->right);
        int maior;
        if ( left > right ) {
            maior = left;
        } else {
            maior = right;
        }
        return 1 + maior;
    }
}

// Calcula altura da subárvore direita (recursiva)
int calcHeightRight(struct TreeNode* root) {
    if ( root == NULL ) {
        return 0;
    } else {
        int left = calcHeightRight(root->left);
        int right = calcHeightRight(root->right);
        int maior;
        if ( left > right ) {
            maior = left;
        } else {
            maior = right;
        }
        return 1 + maior;
    }
}


bool isBalanced(struct TreeNode* root) {
    if ( root == NULL ) {
        return true;
    }

    int heightLeft = calcHeightLeft(root->left);
    int heightRight = calcHeightRight(root->right);

    if ( heightLeft - heightRight > 1 || heightRight - heightLeft > 1 ) {
        return false;
    }

    if ( !isBalanced(root->left) ) {
        return false;
    }

    if ( !isBalanced(root->right) ) {
        return false;
    }

    return true;
}