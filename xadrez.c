#include <stdio.h>

// Definição de constantes para os limites de movimento
#define MAX_RECURSION 8 // Um limite para evitar recursão excessiva
#define CAVALO_VERTICAL 2
#define CAVALO_HORIZONTAL 1

// Função recursiva para movimentação da Torre (para a direita)
void moverTorreRecursivo(int casas) {
    if (casas > 0 && casas <= MAX_RECURSION) {
        printf("Direita\n");
        moverTorreRecursivo(casas - 1);
    }
}

// Função recursiva para movimentação da Rainha (para a esquerda)
void moverRainhaRecursivo(int casas) {
    if (casas > 0 && casas <= MAX_RECURSION) {
        printf("Esquerda\n");
        moverRainhaRecursivo(casas - 1);
    }
}

// Função recursiva para movimentação do Bispo (diagonal superior direita)
void moverBispoRecursivo(int casas) {
    if (casas > 0 && casas <= MAX_RECURSION) {
        printf("Diagonal Superior Direita (Cima e Direita)\n");
        moverBispoRecursivo(casas - 1);
    }
}

int main() {
    // --- Movimentação da Torre (Recursiva) ---
    printf("--- Movimentação da Torre (Recursiva) ---\n");
    moverTorreRecursivo(5); // Move 5 casas para a direita
    printf("\n");

    // --- Movimentação da Rainha (Recursiva) ---
    printf("--- Movimentação da Rainha (Recursiva) ---\n");
    moverRainhaRecursivo(8); // Move 8 casas para a esquerda
    printf("\n");

    // --- Movimentação do Bispo (Recursiva) ---
    printf("--- Movimentação do Bispo (Recursiva) ---\n");
    moverBispoRecursivo(5); // Move 5 casas na diagonal superior direita
    printf("\n");

    // --- Movimentação do Cavalo (Loops Complexos) ---
    printf("--- Movimentação do Cavalo (Loops Complexos) ---\n");
    printf("Movimento em L (2 Cima, 1 Direita):\n");

    for (int cima = 1; cima <= CAVALO_VERTICAL; cima++) {
        printf("Cima\n");
        for (int direita = 1; direita <= CAVALO_HORIZONTAL; direita++) {
            printf("Direita\n");
            // Podemos adicionar mais lógica ou condições aqui se necessário
        }
    }
    printf("\n");

    // --- Movimentação do Bispo (Loops Aninhados) ---
    printf("--- Movimentação do Bispo (Loops Aninhados) ---\n");
    printf("Movimento Diagonal Superior Direita (Simulado com Loops):\n");

    for (int vertical = 1; vertical <= 5; vertical++) {
        printf("Cima ");
        for (int horizontal = 1; horizontal <= 5; horizontal++) {
            if (vertical == horizontal) { // Simula o movimento diagonal
                printf("Direita\n");
                break; // Move apenas uma casa na diagonal por iteração externa
            }
        }
    }
    printf("\n");

    return 0;
}