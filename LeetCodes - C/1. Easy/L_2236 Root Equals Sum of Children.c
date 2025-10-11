#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct TreeNode {
         int val;
        struct TreeNode *left;
        struct TreeNode *right;
    };
struct TreeNode *newNode(int val) {
    struct TreeNode* node = (struct TreeNode*)malloc(sizeof(struct TreeNode));
    node->val = val;
    node->left = NULL;
    node->right = NULL;
    return node;
}

bool checkTree(struct TreeNode* root);

int main () {

    struct TreeNode *root = newNode(10);
    root->left = newNode(4);
    root->right = newNode(6);

    if ( checkTree(root) == true ) {
        printf("É verdade\n");
    }

    return 0;
}
bool checkTree(struct TreeNode* root) {
    if ( root->left->val + root->right->val == root->val ){
        return true;
    } else {
        return false;
    }
}