#include <stdio.h>
#include <stdlib.h>

int uniquePaths(int m, int n);

int main() {

    int m = 3;
    int n = 7;

    int resultado = uniquePaths(m, n);

    printf("Total de Caminhos: %d\n", resultado);

    return 0;
}

int uniquePaths(int m, int n) {
    
    int grid[m][n];

    //Linhas ( só ir pra esquerda )
    for( int i = 0; i < n; i++) {
        grid[0][i] = 1;
    }

    //Colunas (só ir pra baixo )
    for( int j = 0; j < m; j++) {
        grid[j][0] = 1;
    }

    //Prenchee os outros caminhos
    for( int j = 1; j < m; j++) {
        for( int i = 1; i < n; i++) {
            grid[j][i] = grid[j-1][i] + grid[j][i-1];
        }
    }

    return grid[m - 1][ n - 1];
}

// Grid 3x7:
//    1    1    1    1    1    1    1 
//    1    2    3    4    5    6    7 
//    1    3    6   10   15   21   28 
// Total de Caminhos: 28