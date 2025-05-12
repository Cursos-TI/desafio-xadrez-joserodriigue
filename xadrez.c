#include <stdio.h>

// Definição de constantes para os limites de movimento
#define MAX_BISPO 5
#define MAX_TORRE 5
#define MAX_RAINHA 8

int main() {
    // Movimentação do Bispo (diagonal superior direita)
    printf("--- Movimentação do Bispo ---\n");
    for (int i = 1; i <= MAX_BISPO; i++) {
        printf("Diagonal Superior Direita (Cima e Direita): %d casa(s)\n", i);
    }
    printf("\n");

    // Movimentação da Torre (para a direita)
    printf("--- Movimentação da Torre ---\n");
    int j = 1;
    while (j <= MAX_TORRE) {
        printf("Direita: %d casa(s)\n", j);
        j++;
    }
    printf("\n");

    // Movimentação da Rainha (para a esquerda)
    printf("--- Movimentação da Rainha ---\n");
    int k = 1;
    do {
        printf("Esquerda: %d casa(s)\n", k);
        k++;
    } while (k <= MAX_RAINHA);
    printf("\n");

    return 0;
}