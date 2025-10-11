
#include <stdio.h>

char kthCharacter(int k);

int main() {

    int numero;

    printf("Digite o número do char que vc quer: ");
    scanf("%d", &numero);

    char result = kthCharacter(numero);

    printf("Caractere: %c", result);

    return 0;
}

char kthCharacter(int k) {


}