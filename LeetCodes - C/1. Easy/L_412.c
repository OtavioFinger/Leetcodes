
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char** fizzBuzz(int n, int* returnSize);

int main() {
    int quantasRepeticoes, retornoValor;
    char** matrizRespostas;


    printf("Quantas vezes vai se repetir o jogo? ");
        scanf("%d", &quantasRepeticoes);

    matrizRespostas = fizzBuzz ( quantasRepeticoes, &retornoValor);

    printf("\nResultado do FizzBuzz:\n");
    for (int i = 0; i < quantasRepeticoes && retornoValor; i++) {
        printf("%s\n", matrizRespostas[i]);
    }

    //COMO EU DESALOCO AS STRING DENTRO DE matrizRespostas?

    free(matrizRespostas);

    return 0;
}

char** fizzBuzz(int n, int* returnSize) {
    
    char **answer = (char **)malloc(sizeof(char*) * n);
    *returnSize = n;

    int verificador = 0;
    for( int i = 0; i < n; i++ ) {
        verificador = i + 1;

        if ( verificador % 3 == 0 && verificador % 5 == 0 ) {
            answer[i] = "FizzBuzz";
        } else if ( verificador % 3 == 0 ) {
            answer[i] = "Fizz";
        } else if ( verificador % 5 == 0 ) {
            answer[i] = "Buzz";
        } else {
            answer[i] = (char *)malloc(12); // 1 char é 1 byte, 11 bytes do int + \0, que é 1 char
            sprintf(answer[i], "%d", verificador); //converte um int em "string"
        }
    }
    return answer;
}