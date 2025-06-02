#include <stdio.h>

// Função recursiva para mover a Torre para a direita
void moverTorre(int casas) {
    if (casas == 0) return;
    printf("Direita\n");
    moverTorre(casas - 1);
}

// Função recursiva para mover o Bispo para cima e à direita
void moverBispo(int casas) {
    if (casas == 0) return;
    printf("Cima Direita\n");
    moverBispo(casas - 1);
}

// Função recursiva para mover a Rainha para a esquerda
void moverRainha(int casas) {
    if (casas == 0) return;
    printf("Esquerda\n");
    moverRainha(casas - 1);
}

// Função com loops aninhados para o movimento do Cavalo em "L"
void moverCavalo() {
    int i, j;
    for (i = 0; i < 2; i++) { // Duas casas para cima
        printf("Cima\n");
        for (j = 0; j < 1; j++) { // Uma casa para a direita
            if (i == 1) {
                printf("Direita\n");
                break;
            }
        }
    }
}

// Bispo com loops aninhados além da recursão (loop vertical -> loop horizontal)
void loopsAninhadosBispo() {
    int i, j;
    for (i = 0; i < 5; i++) { // vertical (cima)
        for (j = 0; j < 1; j++) { // horizontal (direita)
            printf("Cima Direita\n");
        }
    }
}

int main() {
    // Variáveis com número de casas
    int casasTorre = 5;
    int casasBispo = 5;
    int casasRainha = 8;

    // Torre - usa recursividade
    printf("Movimento da Torre:\n");
    moverTorre(casasTorre);

    printf("\n");

    // Bispo - recursividade
    printf("Movimento do Bispo (com recursividade):\n");
    moverBispo(casasBispo);

    printf("\n");

    // Rainha - recursividade
    printf("Movimento da Rainha:\n");
    moverRainha(casasRainha);

    printf("\n");

    // Cavalo - loops aninhados com break
    printf("Movimento do Cavalo (com loops aninhados):\n");
    moverCavalo();

    printf("\n");

    // Bispo novamente com loops aninhados
    printf("Movimento do Bispo (com loops aninhados):\n");
    loopsAninhadosBispo();

    return 0;
}
