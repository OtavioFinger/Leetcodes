
#include <stdio.h>
#include <stdlib.h>

void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n);
void mergeBoth( int *nums1, int firstIndex, int mid, int lastIndex);
void mergeSortSoluction( int* nums1, int firstIndex, int lastIndex);

int main() {

    int nums1[] = {1,2,3,0,0,0};
    int nums2[] = {2,5,6};
    int m = 3;
    int nums1Size = 6; //m + n
    int n = 3;
    int nums2Size = 3;

    merge(nums1,nums1Size, m, nums2, nums2Size, n);

    for( int i = 0; i < nums1Size; i++) {
        printf( "nums1[%d]: %d\n", i, nums1[i] );
    }

    return 0;
}

void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n) {

    //Passo 1: Adicionar os valores de num2 em nums1
    int j = 0;
    for( int i = m; i < nums1Size; i++) {
        nums1[i] = nums2[j];
        j++;
    }

    //Fazer o merge sort, afinal, meu vetor é aleatório, O(n)
    int firstIndex = 0;
    int lastIndex = nums1Size - 1;
    mergeSortSoluction( nums1, firstIndex, lastIndex);

    //Pior parte, ordenar em ordem decrescente

}
void mergeSortSoluction( int* nums1, int firstIndex, int lastIndex) {
    
    if ( firstIndex < lastIndex) { //vetor é maior que 1
        int mid = (firstIndex + lastIndex) / 2;

    mergeSortSoluction( nums1, firstIndex, mid );
    mergeSortSoluction( nums1, mid + 1, lastIndex); // + 1 pra juntar certo
    mergeBoth( nums1, firstIndex, mid, lastIndex);
    }

    
}
//Lógica em si para reordenar
void mergeBoth( int *nums1, int firstIndex, int mid, int lastIndex) {

   int n1 = (mid - firstIndex) + 1;
   int n2 = lastIndex - mid;

    int tempArrayHalf1[n1];
    int tempArrayHalf2[n2];

        //Coloca tudo no array temporário
    for( int i = 0; i < n1; i++ ) {
        tempArrayHalf1[i] = nums1[firstIndex + i];
    }

        //Colocar tudo no outro array temporário
    for( int j = 0; j < n2; j++) {
        tempArrayHalf2[j] = nums1[mid + 1 + j];
    }

    int index1 = 0, index2 = 0, indexOriginal = firstIndex;

    while ( index1 < n1 && index2 < n2 ) {

            //Se VALOR METADE 1 É MENOR QUE VALOR METADE 2, COLOCAR EM nums1
        if( tempArrayHalf1[index1] <= tempArrayHalf2[index2] ) { //if que faz essa comparação
            nums1[indexOriginal] = tempArrayHalf1[index1];
            index1++;
        } else {
            nums1[indexOriginal] = tempArrayHalf2[index2];
            index2++;
        }
        indexOriginal++;
    }
    // Para elementos restantes de qualquer um dos vetores,
       
    while( index1 < n1 ) {
        nums1[indexOriginal] = tempArrayHalf1[index1];
        index1++;
        indexOriginal++;
    }

    while( index2 < n2 ) {
        nums1[indexOriginal] = tempArrayHalf2[index2];
        index2++;
        indexOriginal++;
    }
}



// Input: nums1 = [1,2,3,0,0,0], m = 3, nums2 = [2,5,6], n = 3
// Output: [1,2,2,3,5,6]