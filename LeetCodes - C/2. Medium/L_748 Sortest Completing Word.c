#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char* shortestCompletingWord(char* licensePlate, char** words, int wordsSize);

    ////COMEÇO DO MAIN

int main(int argc, char const *argv[])
{
    char licensePlate[] = "t0t0t0TTa";
    char* words[] = {"t","tt","ta","ttttat"};
    int wordsSize = 4;

    char* resultado = shortestCompletingWord(licensePlate, words, wordsSize);

    printf("Output: \"%s\"\n", resultado);

    return 0;
}   
    ////FIM DO MAIN

char* shortestCompletingWord(char* licensePlate, char** words, int wordsSize) {
    
    // Conta as letras do alfabeto de "a" = 0 até "z" = 25
    int FiltradaLicensePlate[26] = {0}; 


    // Contagem de letras do licensePlate (só as letras)
    for ( int i = 0; licensePlate[i] != '\0'; i++ ) {
        char letra = licensePlate[i];

        // Para lower case
        if ( letra >= 'a' && letra <= 'z' ) {
            FiltradaLicensePlate[letra - 'a']++;
        }
        // Para upper case
        else if ( letra >= 'A' && letra <= 'Z' ) {
            FiltradaLicensePlate[letra - 'A']++;
        }
        
    }

    char *palavraFinal = NULL;
    int numeroDeWords = wordsSize;
    int tamanhoLastWord = 15; // Tirado de Constraints

    // Bloco Maior que analisa TODAS as plaavras e quais são palavras são VALIDAS
    for ( int i = 0; i < numeroDeWords; i++ ) { 

        int contadorWord[26] = {0};
        char* word = words[i];

        // Contagem de letras da palavra em questão
        for ( int j = 0; word[j] != '\0'; j++ ) {
            char letra = word[j];
            contadorWord[letra - 'a']++;
        }

        // Verificar se a palavra atende todos os requisitos

        int éValido = 1; 

        for ( int k = 0; k < 26; k++ ) {
            if ( contadorWord[k] < FiltradaLicensePlate[k] ) {
                éValido = 0;
                break; 
            }
        }

        // Se for VÁLIDA e MENOR que a VÁLIDA anterior, atualizar a string
        int tamanhoWord = strlen(word);
        
        if ( éValido && tamanhoWord < tamanhoLastWord ) {
            
            tamanhoLastWord = tamanhoWord;
            palavraFinal = word; 
        }
    } //FIM DO forzão

    return palavraFinal;
}
