
#include <stdio.h>

int removeDuplicates(int* nums, int numsSize) ;

int main() {
    int nums[] = {0,0,1,1,1,2,2,3,3,4};
    int numsSize = 9;

    int resultado = removeDuplicates( nums, numsSize );

        printf("Elementos Diferentes: %d\n", resultado);

    return 0;
}
int removeDuplicates(int* nums, int numsSize) {
    // k é o número de elementos não repetidos

    if ( numsSize == 0 )
        return 0;

    int k = 0; //consequenteemente vai ser o tamanho do vetor

    for( int i = 1; i < numsSize; i++ ) {
        if ( nums[i] != nums[k] ) {
            nums[++k] = nums[i];
            
        }
    }
    return k + 1;
}
