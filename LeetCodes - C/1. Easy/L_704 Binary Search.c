#include <stdio.h>

int search(int* nums, int numsSize, int target) {
    
    //Left & Right (índices)
    int left = 0;
    int right = numsSize - 1; //se tem 6, vira 5

    while ( left <= right ) {
        //Declara o mid
        int mid = left + (right - left) / 2; //tira o overflow

        if ( nums[mid] == target ) {
            return mid;
        } else if ( nums[mid] < target ) {
            left = mid + 1;
        } else if ( nums[mid] > target ) {
            right = mid - 1;
        }
    }
    return -1; //caso em que não acha
}

int main() {
    int nums[] = {-1,0,3,5,9,12};
    int numsSize = sizeof(nums) / sizeof(nums[0]);
    int target = 9;

    int resultado = search(nums, numsSize, target);

    if ( resultado != -1 ) {
        printf("Elemento %d encontrado no índice %d\n", target, resultado);
    } else {
        printf("Elemento %d não encontrado\n", target);
    }
}