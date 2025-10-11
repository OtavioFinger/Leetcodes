#include <stdio.h>
#include <string.h>

int main() {

    char *roman = "MCMXCIV"; // 1994
    int result = romanToInt( roman );
    printf("Roman: %s Integer: %d\n", roman, result);

    return 0;
}

int returnValueOfChar( char c ) {

    switch(c) {
        case 'I':
        return 1;
        break;

        case 'V':
        return 5;
        break;

        case 'X':
        return 10;
        break;

        case 'L':
        return 50;
        break;

        case 'C':
        return 100;
        break;

        case 'D':
        return 500;
        break;

        case 'M':
        return 1000;
        break;

        default: return 0;
    }

}

int romanToInt(char* s) {
    int totalValue = 0;
    int tamString = strlen(s);

    //Para cada caractere, fazer a soma
    for ( int i = 0; i < tamString; i++) {
        
        int actualValue = returnValueOfChar( s[i] );
        int nextValue = returnValueOfChar( s[i+1] );

          //Se os números forem iguais ou não tiver nada de 4 ou 9
        if ( actualValue >= nextValue ) {
         totalValue += returnValueOfChar(s[i]);
        } // Se tiver algo de 4 ou nove, exp:   actual = I next = V
        else if ( nextValue > actualValue ) { 
            int subtract = nextValue - actualValue;
            totalValue += subtract;
            i++; //Faz com que depois de ler um 4|9, pule para ler a prox sequência de Par
        }
    }

 return totalValue;  

}