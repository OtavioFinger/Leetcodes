
#include <stdio.h>

int maxProfit(int* prices, int pricesSize);

int main() {

    int prices[] = {7,1,5,3,6,4};
    int pricesSize = 6;

    int resultado = maxProfit( prices, pricesSize); 

    printf("Output: %d\n", resultado);

    return 0;
}
int maxProfit(int* prices, int pricesSize) {
    int bestDayBuy = prices[0];
    int bestProfit = 0;

    for ( int i = 1; i < pricesSize; i++ ) {
        if ( prices[i] < bestDayBuy ) {
            bestDayBuy = prices[i];  // Atualiza o menor valor até agora (melhor dia de compra)
        } else {
            int possibleProfit = prices[i] - bestDayBuy;
            if ( possibleProfit > bestProfit ) {
                bestProfit = possibleProfit;  // Atualiza o melhor lucro
            }
        }
    }

    return bestProfit;
}

