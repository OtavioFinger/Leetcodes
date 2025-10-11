#include <stdio.h>
#include <stdlib.h>

  struct TreeNode {
      int val;
      struct TreeNode *left;
      struct TreeNode *right;
  };

  // função auxiliar para criar nó
  struct TreeNode* newNode(int val) {
      struct TreeNode* node = (struct TreeNode*)malloc(sizeof(struct TreeNode));
      node->val = val;
      node->left = NULL;
      node->right = NULL;
      return node;
  }
 

// função auxiliar DFS
int dfs(struct TreeNode* root, int num) {
    if ( root == NULL ) 
        return 0;

    // forma o número parcial
    num = num * 10 + root->val;

    // se for folha, retorna o número que já tem
    if ( root->left == NULL && root->right == NULL ) {
        return num;
    }

    // senão, continua explorando esquerda e direita
    return dfs(root->left, num) + dfs(root->right, num);
}


int sumNumbers(struct TreeNode* root) {

    return dfs(root, 0);

}

int main() {
 
    struct TreeNode* root = newNode(4);
    root->left = newNode(9);
    root->right = newNode(0);
    root->left->left = newNode(5);
    root->left->right = newNode(1);

    int result = sumNumbers(root);
    printf("Resultado: %d\n", result); // esperado = 1026

    // liberar memória (simples)
    free(root->left->left);
    free(root->left->right);
    free(root->left);
    free(root->right);
    free(root);

    return 0;
}
