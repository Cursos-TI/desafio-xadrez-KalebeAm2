#include <stdio.h>

// Constantes para os movimentos
#define MOV_TORRE 5
#define MOV_RAINHA 8
#define MOV_BISPO 5
#define PASSOS_VERTICAL 2
#define PASSOS_HORIZONTAL 1

int main() {
    int i;

    // ---------------- TORRE ----------------
    printf("Movimento da TORRE:\n");
    for (i = 0; i < MOV_TORRE; i++) {
        printf("Direita\n");
    }

    // ---------------- RAINHA ----------------
    printf("\nMovimento da RAINHA:\n");
    int j = 0;
    while (j < MOV_RAINHA) {
        printf("Esquerda\n");
        j++;
    }

    // ---------------- BISPO ----------------
    printf("\nMovimento do BISPO:\n");
    int k = 0;
    do {
        printf("Cima\n");
        printf("Direita\n");
        k++;
    } while (k < MOV_BISPO);

    // ---------------- CAVALO ----------------
    printf("\nMovimento do CAVALO (em L: Baixo + Esquerda):\n");
    for (int v = 0; v < PASSOS_VERTICAL; v++) {
        printf("Baixo\n");

        int h = 0;
        while (h < PASSOS_HORIZONTAL) {
            printf("Esquerda\n");
            h++;
        }
    }

    return 0;
}
