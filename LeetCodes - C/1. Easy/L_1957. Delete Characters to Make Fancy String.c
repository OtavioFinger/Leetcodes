#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* makeFancyString(char* s);

int main() {

    char s[] = "leeeeeetcode";

    char* result = makeFancyString(s);
    
    for( int i = 0; i < strlen(s); i++ ) {
        printf("%c", result[i]);
    }

    return 0;
}

char* makeFancyString(char* s) {

  // Se a string é menor que 2, retorne ela mesma
  if ( strlen(s) <= 2 ) {
    return s;
}

//Alocar tamanho da string
char* result = (char *)malloc(strlen(s) + 1); //pro \0
int index = 0;

for( int i = 0; i < strlen(s); i++ ) {
    // Se o próximo e e próximo->próximo forem diff.
    // Ele escreve
    if ( s[i] != s[i+1] || s[i] != s[i+2] ) {
    result[index] = s[i];
    index++;
    }
}
result[index] = '\0';
return result;
}