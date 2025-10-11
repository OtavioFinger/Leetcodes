
#include <stdio.h>

int maxChunksToSorted(int* arr, int arrSize) ;

int main() {

    int arr[] = {0,1,2,3,4,5};
    int arrSize = 6;

    int result = maxChunksToSorted( arr, arrSize );

    printf("Chunks: %d\n", result);

    return 0;
}

int maxChunksToSorted(int* arr, int arrSize) {
    // Elementos na posição i correta não leva chunk
    // Se estiver desordenado leva chunk
    // Se todo estiver desornado, 1 chunk
    // Se ele estiver ordenado, chunk = arrSize

    int chunks = 0;
    int elementSum = 0;
    int indexSum = 0;

    for( int i = 0; i < arrSize; i++ ) {

        elementSum += arr[i];
        indexSum += i;

        if ( elementSum == indexSum )
            chunks++;
    }
    return chunks;
}