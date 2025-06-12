#include <stdio.h>

// Constantes de movimentos
#define MOV_BISPO 5
#define MOV_TORRE 5
#define MOV_RAINHA 8

int main() {
    int i;

    // Movimento da Torre: 5 casas para a direita (for)
    printf("Movimento da TORRE:\n");
    for (i = 0; i < MOV_TORRE; i++) {
        printf("Direita\n");
    }

    // Movimento da Rainha: 8 casas para a esquerda (while)
    printf("\nMovimento da RAINHA:\n");
    int j = 0;
    while (j < MOV_RAINHA) {
        printf("Esquerda\n");
        j++;
    }

    // Movimento do Bispo: 5 casas na diagonal superior direita (do-while)
    printf("\nMovimento do BISPO:\n");
    int k = 0;
    do {
        printf("Cima\n");
        printf("Direita\n");
        k++;
    } while (k < MOV_BISPO);

    return 0;
}
