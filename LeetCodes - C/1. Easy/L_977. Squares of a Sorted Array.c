#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int* sortedSquares(int* nums, int numsSize, int* returnSize) ;

int main() {

    int nums[] = {-4,-1,0,3,10};
    int numsSize = 5;
    int returnSize;

    int *resultado = sortedSquares( nums, numsSize, &returnSize);


    printf("Resultado ordenado dos quadrados:\n ");
    for ( int i = 0; i < returnSize; i++ ) {
        printf("%d ", resultado[i]);
    }
    printf("\n");

    free(resultado);

    return 0;
}

int* sortedSquares(int* nums, int numsSize, int* returnSize) {

    int temp;


 //Transforma no quadrado
    for( int i = 0; i < numsSize; i++) {
        nums[i] = pow(nums[i],2);
    }

    //Faz o Bubble Sort pra ordenar
    for( int i = 0; i < numsSize - 1; i++) {
        for( int j = 0; j < numsSize - i - 1; j++) {
            if ( nums[j] > nums[j+1] ) {
                temp = nums[j];
                nums[j] = nums[j+1];
                nums[j+1] = temp;
                
            }
        }
    }

   
    *returnSize = numsSize;
    return nums;
}