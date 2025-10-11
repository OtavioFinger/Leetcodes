
#include <stdio.h>
#include <string.h>

void reverseString(char* s, int sSize);

int main () {

    char string[] = "hello";
    int sSize = 0;

    for( int i = 0; string[i] != '\0'; i++) {
        sSize++;
    };

    printf("Tamanho %d", sSize);

    reverseString( string, sSize );

    printf(" Reverse: %s\n", string);

    return 0;
}

void reverseString(char* s, int sSize) {
    
    int tam = sSize - 1; //pra deixar viável aos indices

    for( int i = 0; i < sSize / 2; i++ ) { //sSize / 2 pra ele não trocar dnv
        char bucket = s[i];
        s[i] = s[tam - i];
        s[tam - i] = bucket; 
    }
}

