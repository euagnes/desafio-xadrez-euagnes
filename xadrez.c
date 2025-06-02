#include <stdio.h>

int main() {
    // Simulação do movimento da Torre (usando for)
    // Movimento: 5 casas para a Direita
    int movimentoTorre = 5;
    printf("Movimento da Torre:\n");
    for (int i = 0; i < movimentoTorre; i++) {
        printf("Direita\n");
    }

    printf("\n"); // Separador entre as peças

    // Simulação do movimento do Bispo (usando while)
    // Movimento: 5 casas na Diagonal (Cima Direita)
    int movimentoBispo = 5;
    int contadorBispo = 0;
    printf("Movimento do Bispo:\n");
    while (contadorBispo < movimentoBispo) {
        printf("Cima Direita\n");
        contadorBispo++;
    }

    printf("\n"); // Separador entre as peças

    // Simulação do movimento da Rainha (usando do-while)
    // Movimento: 8 casas para a Esquerda
    int movimentoRainha = 8;
    int contadorRainha = 0;
    printf("Movimento da Rainha:\n");
    do {
        printf("Esquerda\n");
        contadorRainha++;
    } while (contadorRainha < movimentoRainha);

    return 0;
}
