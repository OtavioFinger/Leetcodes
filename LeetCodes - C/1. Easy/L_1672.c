
#include <stdio.h>
#include <stdlib.h>

int maximumWealth(int** accounts, int accountsSize, int* accountsColSize);

int main() {

    int contas_array[2][3] = { {1,2,3} , {3,2,1} };
    int* contas[2] = { contas_array[0], contas_array[1] };
    int accountsSize = 2;
    int accountsColSize[2] = {3,3};
    int resultado;

    resultado = maximumWealth(contas, accountsSize, accountsColSize);

    printf( "Output: %d", resultado );

    return 0;
}
int maximumWealth(int** accounts, int accountsSize, int* accountsColSize) {
    int maiorValor = 0;
    int j = 0;

    for( int i = 0; i < accountsSize; i++ ) {
        int soma = 0;
            for( j = 0; j < accountsColSize[i]; j++){
                soma = soma + accounts[i][j];
            }
            if (soma > maiorValor ) {
                maiorValor = soma;
            }
    }

    return maiorValor;
}