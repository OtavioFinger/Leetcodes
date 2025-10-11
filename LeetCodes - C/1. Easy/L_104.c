
#include <stdio.h>
#include <stdlib.h>

struct TreeNode {
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
};

struct TreeNode *newNode (int val) {
    struct TreeNode *node = (struct TreeNode*)malloc(sizeof(struct TreeNode));
    node->val = val;
    node->left = NULL;
    node->right = NULL;
};

int maxDepth(struct TreeNode *root);

int main() {

    struct TreeNode *root = newNode(3);
    root->left = newNode(9);
    root->right = newNode(20);
    root->right->left = newNode(15);
    root->right->right = newNode(7);

    int resultado = maxDepth(root);

    printf("Altura: %d\n", resultado);
    
    return 0;
}

int calcHeightLeft(struct TreeNode* root) {
    if( root == NULL ) {
        return 0;
    } else {
        int left = calcHeightLeft(root->left);
        int rightLeft = calcHeightLeft(root->right);
        int maior; 

        if ( left > rightLeft ) {
            maior = left;
        } else {
            maior = rightLeft;
        }
        return 1 + maior;
    }
    
}
int calcHeightRight(struct TreeNode* root) {
    if ( root == NULL ) {
        return 0;
    } else {
        int leftRight = calcHeightRight(root->left);
        int right = calcHeightRight(root->right);
        int maior;
        
        if ( leftRight > right ) {
            maior = leftRight;
        } else {
            maior = right;
        }
        return 1 + maior;
    }
}
int maxDepth(struct TreeNode* root) {

    if ( root == NULL ) {
        return 0;
    }

    if ( root != NULL && root->left == NULL && root->right == NULL)
    return 1; // Altura = 1 (raiz conta)

    int heightLeft = calcHeightLeft(root->left);
    int heightRight = calcHeightRight(root->right);

   if ( heightLeft > heightRight ) {
        return 1 + heightLeft; // 1 é do nó atual
    } else {
        return 1 + heightRight; // 1 é do nó atual
    }
}
