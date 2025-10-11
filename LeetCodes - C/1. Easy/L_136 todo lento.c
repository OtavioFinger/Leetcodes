

// Given a non-empty array of integers nums, every element appears twice except for one. Find that single one.

// You must implement a solution with a linear runtime complexity and use only constant extra space.

// Example 1:

// Input: nums = [2,2,1]

// Output: 1

#include <stdio.h>

int singleNumber(int* nums, int numsSize);

int main () {

    int nums[] = {4,1,2,1,2};
    int numsSize = 5;

    int resultado = singleNumber(nums, numsSize);

    printf("Só aparece uma vez: %d\n", resultado);

    return 0;
}

int singleNumber(int* nums, int numsSize) {
    //Dado um array não vazio de nums, encontre o elemento que não aparece mais de uma vez

     for ( int i = 0; i < numsSize; i++ ) {
        int countNumber = 0;

        // j vai percorrer todo o vetor em busca do elem.
        for ( int j = 0; j < numsSize; j++ ) {
            if ( nums[i] == nums[j] ) {
                countNumber++;
            }
        }

        // Se j percorrer tudo e só viu o elem. uma vez:
        if ( countNumber == 1 ) {
            return nums[i];
        }
    }

    return 0;
}