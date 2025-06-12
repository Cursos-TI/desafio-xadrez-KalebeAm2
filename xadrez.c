#include <stdio.h>

// Constantes
#define MOV_TORRE 5
#define MOV_RAINHA 8
#define MOV_BISPO 5
#define CAVALO_PASSOS 2

// ------------------- Funções Recursivas -------------------

void moverTorre(int contador) {
    if (contador == 0) return;
    printf("Direita\n");
    moverTorre(contador - 1);
}

void moverRainha(int contador) {
    if (contador == 0) return;
    printf("Esquerda\n");
    moverRainha(contador - 1);
}

// Bispo com recursão + loop aninhado (loop dentro da recursão)
void moverBispo(int contador) {
    if (contador == 0) return;
    
    for (int i = 0; i < 1; i++) {
        printf("Cima\n");
        printf("Direita\n");
    }

    moverBispo(contador - 1);
}

// Cavalo com múltiplas variáveis, loops aninhados, break e continue
void moverCavalo() {
    printf("Movimento do CAVALO (em L: Baixo + Esquerda):\n");

    for (int i = 0; i < CAVALO_PASSOS; i++) {
        if (i == 1) continue; // pula a iteração 1 (exemplo de uso de continue)
        printf("Baixo\n");

        for (int j = 0; j < 2; j++) {
            if (j == 1) break; // só executa 1 vez (1 passo esquerda)
            printf("Esquerda\n");
        }
    }

    // Segunda parte do movimento (sem pular)
    for (int i = 0; i < CAVALO_PASSOS; i++) {
        printf("Baixo\n");

        for (int j = 0; j < 1; j++) {
            printf("Esquerda\n");
        }
    }
}

// ------------------- Programa Principal -------------------

int main() {
    // Torre
    printf("Movimento da TORRE:\n");
    moverTorre(MOV_TORRE);

    // Rainha
    printf("\nMovimento da RAINHA:\n");
    moverRainha(MOV_RAINHA);

    // Bispo
    printf("\nMovimento do BISPO:\n");
    moverBispo(MOV_BISPO);

    // Cavalo
    printf("\n");
    moverCavalo();

    return 0;
}
