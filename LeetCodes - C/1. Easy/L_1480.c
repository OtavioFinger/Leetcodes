

#include <stdio.h>
#include <stdlib.h>

int* runningSum(int* nums, int numsSize, int* returnSize);
    
int main() {

    // 1. Define o array de entrada e seu tamanho
    int nums[] = {1, 2, 3, 4};
    int numsSize = sizeof(nums) / sizeof(nums[0]);
    int returnSize;  
    int* result; 
    
    result = runningSum(nums, numsSize, &returnSize);

    if ( result == NULL ) {
        printf("Erro: falha na alocação de memória.\n");
        return 1;
    }

    for (int i = 0; i < returnSize; i++) {
        printf("%d ", result[i]);
    }
    free(result);

    return 0;
}

int* runningSum(int* nums, int numsSize, int* returnSize) {
    int *newArray;
    int adder = 0;

    newArray = (int *)malloc(numsSize * sizeof(int));

    for ( int i = 0; i < numsSize; i++ ) {

        newArray[i] = nums[i] + adder;
        adder = newArray[i];
        
    }

    *returnSize = numsSize;
    return newArray;
}