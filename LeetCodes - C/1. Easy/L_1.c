
#include <stdio.h>
#include <stdlib.h>

int* twoSum(int* nums, int numsSize, int target, int* returnSize);

int main() {

    int numeros[] = {2,7,11,15};
    int numsSize = 4;
    int target = 9;
    int enderecoQueTemSize; //vai ser passo seu endereço para conseguir o novo valor do vetor;

    int* result;

    result = twoSum( numeros, numsSize, target, &enderecoQueTemSize);

    for( int i = 0; i < enderecoQueTemSize; i++ ) {
        printf("%d ", result[i]);
    }
    printf("\n");
    free(result);

    return 0;
}


int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
        
    int *arrayOfIndices;

    arrayOfIndices = (int*)malloc(sizeof(int) * 2);

    //Começa percorrendo o vetor
    for( int i = 0; i < numsSize; i++) {
        for( int j = i + 1; j < numsSize; j++ ) {
            if ( nums[i] + nums[j] == target ) {
                    arrayOfIndices[0] = i;  //primeiro elemento é o i
                    arrayOfIndices[1] = j;  //segundo elemento é o j
                    if ( arrayOfIndices[0] > arrayOfIndices[1]) {
                        int bucket = arrayOfIndices[0];
                        arrayOfIndices[0] = arrayOfIndices[1];
                        arrayOfIndices[1] = bucket;

                        *returnSize = 2;
                        return arrayOfIndices;
                    }
                *returnSize = 2;
                return arrayOfIndices;
            }   
        }
    }
    
    //Não encontrou uma soma?
    *returnSize = 0;
    return NULL;
}