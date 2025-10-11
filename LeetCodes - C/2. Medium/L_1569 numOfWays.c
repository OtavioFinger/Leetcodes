#include <stdio.h>
#include <stdlib.h>


int numOfWays(int* nums, int numsSize) {
    
    //Permutação de 2 elementos
    if ( numsSize == 2 ) {
        return 0;
    }

    int m = numsSize;

    unsigned int newVector[m];
    unsigned int table[m+1][m+1];

    for( int i = 0; i < m + 1; i++ ) {
        table[i] = newVector[i + 1];
        for ( int j = 1; j < i; j++) {
            table[i][j] = table[i - 1][j - 1] + tabl[i - 1][j];
        }
    }

    return dfs(nums) - 1);
}
unsigned int dfs( newVector, &nums) {

}