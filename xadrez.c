#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Nível Novato: Movimentação de Torre, Bispo e Rainha usando loops diferentes.

int main() {
    // --- Declaração de variáveis constantes para número de casas ---
    const int casasTorre = 5;
    const int casasBispo = 5;
    const int casasRainha = 8;

    // --- Movimentação da Torre ---
    // A Torre se move 5 casas para a direita usando o loop for
    printf("Movimento da Torre:\n");
    for(int i = 1; i <= casasTorre; i++) {
        printf("Direita\n");
    }
    printf("\n");

    // --- Movimentação do Bispo ---
    // O Bispo se move 5 casas na diagonal superior direita usando while
    printf("Movimento do Bispo:\n");
    int contadorBispo = 1;
    while(contadorBispo <= casasBispo) {
        printf("Cima, Direita\n");
        contadorBispo++;
    }
    printf("\n");

    // --- Movimentação da Rainha ---
    // A Rainha se move 8 casas para a esquerda usando do-while
    printf("Movimento da Rainha:\n");
    int contadorRainha = 1;
    do {
        printf("Esquerda\n");
        contadorRainha++;
    } while(contadorRainha <= casasRainha);

    return 0;
}
