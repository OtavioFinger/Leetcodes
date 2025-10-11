#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct TreeNode {
    int val;
    struct TreeNode *left;
   struct TreeNode *right;
};

struct TreeNode *newNode( int val ){

    struct TreeNode *newNode = (struct TreeNode *)malloc(sizeof(struct TreeNode));
    newNode->val = val;
    newNode->right = NULL;
    newNode->left = NULL;
    return newNode;
}

bool evaluateTree(struct TreeNode* root);

int main() {

    struct TreeNode *root = newNode(2);
    root->left = newNode(1);
    root->right = newNode (3);
    root->right->left = newNode(0);
    root->right->right = newNode(1);
    

    bool value = evaluateTree(root);

    if ( value == 1 ) {
        printf("Valor Lógico: True");
    } else {
        printf("Valor Lógico: False");
    }

    return 0;
}

bool evaluateTree(struct TreeNode* root) {
    if ( root->val == 0 ) return false; 
    if ( root->val == 1 ) return true;

    //Se é um OR
    if ( root->val == 2 ) {
        bool left = evaluateTree(root->left);
        bool right = evaluateTree(root->right);

        return left || right ? true : false;
    } 
    //Se é um AND
    if ( root->val == 3 ) {
        bool left = evaluateTree(root->left);
        bool right = evaluateTree(root->right);

        return left && right ? true : false;
    }
    //Só pra funcionar a função
    return false;
}