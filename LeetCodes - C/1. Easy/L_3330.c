
#include <stdio.h>


int possibleStringCount(char* word);

int main() {

    char palavra[] = "abbcccc";

    int result = possibleStringCount( palavra );

    printf("%d\n", result);

    return 0;
}

int possibleStringCount(char* word) {

    int possibleStrings = 1; //A palavra certa é uma possibilidade

    for( int i = 1; word[i] != '\0'; i++ ) {
        if( word[i] == word[i-1] ) { //Se a letra se repete, pode ser possi.
            possibleStrings++;  
        }
    }

    return  possibleStrings;   
}