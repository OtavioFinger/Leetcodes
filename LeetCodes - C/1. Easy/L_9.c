
#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool isPalindrome(int x);

int main() {

    int valor = 121;
    bool resultado;

    resultado = isPalindrome(valor);

    if ( resultado == true ) {
        printf("É palíndromo!");
    } else {
        printf("Não é palíndromo!\n");
    }

    return 0;
}

bool isPalindrome(int x) {
    // Transformar em uma string
    //Reverter a string
    // Comparar ambas as strings

    char stringInt[100];
    char reversedStringInt[100];

    sprintf( stringInt, "%d", x);
    int tamStringInt = strlen(stringInt);

    for( int i = 0; i < tamStringInt; i++ ) {
            reversedStringInt[i] = stringInt[tamStringInt - 1 - i];
    }
    reversedStringInt[tamStringInt] = '\0';

    for (int i = 0; i < tamStringInt; i++) {
        if ( stringInt[i] != reversedStringInt[i] )
            return false;
    }
    return true;
}