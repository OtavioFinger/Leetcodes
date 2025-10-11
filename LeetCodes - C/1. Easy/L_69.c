
#include <stdio.h>

int mySqrt(int x);

int main() {

    int n;

    printf( "Digite um número para fazer sua raíz quadrada: " );
    scanf("%d", &n);

    printf( "%d\n", mySqrt(n) );

    return 0;
}

int mySqrt(int x) {
    unsigned long esquerda = 0;
    unsigned long direita = x;
    while ( esquerda <= direita ){
        unsigned long meio = (esquerda + direita) / 2;
        if (meio * meio < x)
            esquerda = meio + 1;
        else if(meio * meio > x)
            direita = meio - 1;
        else
            return meio;
    }
    return direita;
}