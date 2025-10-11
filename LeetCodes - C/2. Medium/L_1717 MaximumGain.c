#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int MaximumGain(char* s, int x, int y);

int main(int argc, char const *argv[])
{
    char* s = "cdbcbbaaabab";
    int result;

    int x = 4;
    int y = 0;

    result = MaximumGain( s, x, y );

    printf("Result: %d\n", result);

    return 0;
}

int MaximumGain(char* s, int x, int y) {
    int points = 0;
    int lenString = strlen(s);

    //Definir a pilha para colocar a string
    struct Stack_t {
        char characterOfString[255];
        int top;   
        int base;  
    };

    struct Stack_t myStack, tempStack;

    //Caso precise fazer funções auxiliares
    struct Stack_t *pMyStack = &myStack;
    struct Stack_t *pTempStack = &tempStack;

    //Inicia a pilha como vazia
    pMyStack->top = -1;  // -1 indica pilha vazia
    pTempStack->top = -1;

    //Decide qual a ordem das operações

    // Definir qual operação será efetuada primeiro
    char firstHigh, secondHigh, firstLow, secondLow;
    int highValue = 0, lowValue = 0;

    //Definir o padrão que dá mais pontos;
    if ( x > y ) {  //padrão "ab"
        firstHigh = 'a'; secondHigh = 'b'; highValue = x;
        firstLow  = 'b'; secondLow  = 'a'; lowValue  = y;
    } else {        //padrão "ba"
        firstHigh = 'b'; secondHigh = 'a'; highValue = y;
        firstLow  = 'a'; secondLow  = 'b'; lowValue  = x;
    }

    //Empilha na pilha principal, vendo o valor MAIOR
    for ( int i = 0; i < lenString; i++ ) {

            //Empilha um char por vez
        pMyStack->characterOfString[++(pMyStack->top)] = s[i];

        
        if ( pMyStack->top >= 1 &&
            pMyStack->characterOfString[pMyStack->top - 1] == firstHigh &&
            pMyStack->characterOfString[pMyStack->top] == secondHigh ) {
            
            pMyStack->top -= 2;

            points += highValue;
        }
    }   

    //Empilha na outra pilha, elemento por elemento, vendo o valor MENOR
    for ( int i = 0; i <= pMyStack->top; i++ ) {

        //Empilha um char do final de pMyStack por vez
        pTempStack->characterOfString[++(pTempStack->top)] = pMyStack->characterOfString[i];
        
        
        if ( pTempStack->top >= 1 &&
            pTempStack->characterOfString[pTempStack->top - 1] == firstLow &&
            pTempStack->characterOfString[pTempStack->top] == secondLow ) {
            
            pTempStack->top -= 2;

            points += lowValue;
        }
    }
    return points;
}