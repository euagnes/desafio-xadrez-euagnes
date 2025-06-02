#include <stdio.h>

int main() {
    // ----------------------------
    // Movimento da Torre (com for)
    // ----------------------------

    // A torre anda em linha reta. Aqui ela vai andar 5 casas para a direita.
    int casasTorre = 5;

    printf("Movimento da Torre:\n");

    for (int i = 0; i < casasTorre; i++) {
        printf("Direita\n");
    }

    printf("\n"); // espaço entre os movimentos


    // ----------------------------
    // Movimento do Bispo (com while)
    // ----------------------------

    // O bispo anda na diagonal. Aqui ele vai andar 5 casas para cima e para a direita.
    int casasBispo = 5;
    int contadorBispo = 0;

    printf("Movimento do Bispo:\n");

    while (contadorBispo < casasBispo) {
        printf("Cima Direita\n");
        contadorBispo++;
    }

    printf("\n");


    // ----------------------------
    // Movimento da Rainha (com do-while)
    // ----------------------------

    // A rainha pode andar para qualquer lado. Aqui vai andar 8 casas para a esquerda.
    int casasRainha = 8;
    int contadorRainha = 0;

    printf("Movimento da Rainha:\n");

    do {
        printf("Esquerda\n");
        contadorRainha++;
    } while (contadorRainha < casasRainha);

    printf("\n");


    // ----------------------------
    // Movimento do Cavalo (com for + while)
    // ----------------------------

    // O cavalo anda em "L" → 2 casas para baixo e 1 para a esquerda.
    // Usei dois loops aqui: for por fora, while por dentro.
    int movimentosCavalo = 1; // só um movimento do cavalo
    int passo; // contador do loop interno

    printf("Movimento do Cavalo:\n");

    for (int i = 0; i < movimentosCavalo; i++) {
        // Primeiro anda 2 casas para baixo
        passo = 0;
        while (passo < 2) {
            printf("Baixo\n");
            passo++;
        }

        // Depois anda 1 casa para a esquerda
        printf("Esquerda\n");
    }

    return 0;
}
