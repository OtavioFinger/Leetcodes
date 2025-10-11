
#include <stdio.h>

int numberOfSteps(int num);

int main() {
    int num;

    printf("Digite um número: ");
    scanf("%d", &num);

    printf("%d\n", numberOfSteps(num));

    return 0;
}

int numberOfSteps(int num) {
    int output = 0;
    int numberFor = num;

    for( int i = 0; i < numberFor; i++ ) {
        if ( num % 2 == 0 && num != 0 ) {
            num = (int)num / 2;
            output++;
        } else if ( num % 2 == 1 ) {
            num = (int)num - 1;
            output++;
        }
    }
    return output;
}