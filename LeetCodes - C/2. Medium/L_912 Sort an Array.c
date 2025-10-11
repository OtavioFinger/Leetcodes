#include <stdio.h>
#include <stdlib.h>

int* sortArray(int* nums, int numsSize, int* returnSize);

int main() {

    int nums[] = {5,1,1,2,0,0};
    int numsSize = 6;
    int returnSize;

    int* resultado =  sortArray( nums, numsSize, &returnSize);

    for( int i = 0; i < numsSize; i++) {
        printf(" %d", resultado[i]);
    }

    //free(nums);
    free(resultado);

    return 0;
}

int* sortArray(int* nums, int numsSize, int* returnSize) {

    // 5,1,1,2,0,0 Tamanho: 6

    //Caso base
    if ( numsSize == 1 ) {
        int* unico = (int*)malloc(sizeof(int));
        unico[0] = nums[0];
        *returnSize = 1;
        return unico;
    }

    //Vê o meio
    int meio = numsSize / 2;
    int esquerdaTam = meio; 
    int direitaTam = numsSize - meio;

    //Cria as duas listas auxiliares
    int* vetorEsquerda = (int *)malloc(esquerdaTam * sizeof(int));
    int* vetorDireita = (int *)malloc(direitaTam * sizeof(int));

    //Insere em cada lista
    for( int i = 0; i < esquerdaTam; i++ ) {
        vetorEsquerda[i] = nums[i];
    }
    for( int i = 0; i < direitaTam; i++ ) {
        vetorDireita[i] = nums[meio + i]; //outra metade
    }

    int returnEsquerda, returnDireita;
    vetorEsquerda = sortArray( vetorEsquerda, esquerdaTam, &returnEsquerda);
    vetorDireita = sortArray( vetorDireita, direitaTam, &returnDireita);

        //Criar novo vetor
        int* vetorCentral = (int *)malloc(numsSize * sizeof(int));

        int left = 0, right = 0, i = 0;
        while( left < esquerdaTam && right < direitaTam ) {
            if ( vetorEsquerda[left] < vetorDireita[right] ) {
                vetorCentral[i] = vetorEsquerda[left];
                i++;
                left++;
            }else { //Se for igual os valores
                vetorCentral[i] = vetorDireita[right];
                i++;
                right++;
            }
        } //Se sobrou algo de um dos vetores

        while (  left < esquerdaTam ) {
            vetorCentral[i++] = vetorEsquerda[left++];
        }

        while (  right < direitaTam ) {
            vetorCentral[i++] = vetorDireita[right++];
        }

        *returnSize = numsSize;
        free(vetorEsquerda);
        free(vetorDireita);
        return vetorCentral;
}

