#include <stdio.h>

// Definição de constantes para os limites de movimento das peças anteriores
#define MAX_BISPO 5
#define MAX_TORRE 5
#define MAX_RAINHA 8

// Definição de constantes para o movimento do Cavalo
#define CAVALO_VERTICAL 2
#define CAVALO_HORIZONTAL 1

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

    // --- Movimentação do Cavalo ---
    printf("\n--- Movimentação do Cavalo ---\n");

    // Primeiro movimento vertical (duas casas para baixo) usando loop for
    printf("Primeira parte do movimento:\n");
    for (int baixo = 1; baixo <= CAVALO_VERTICAL; baixo++) {
        printf("Baixo\n");
    }

    // Segundo movimento horizontal (uma casa para a esquerda) usando loop while
    printf("\nSegunda parte do movimento:\n");
    int esquerda = 1;
    while (esquerda <= CAVALO_HORIZONTAL) {
        printf("Esquerda\n");
        esquerda++;
    }
    printf("\n");

    return 0;
}