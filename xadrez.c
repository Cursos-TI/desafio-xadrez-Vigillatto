#include <stdio.h>

// Funções recursivas para movimentar peças
void moverDirecao(const char* direcao, int vezes) {
    for (int i = 0; i < vezes; i++) {
        printf("%s\n", direcao);
    }
}

void moverDiagonalRecursiva(int casas) {
    if (casas == 0) return;
    printf("Cima\n");
    printf("Direita\n");
    moverDiagonalRecursiva(casas - 1);
}

void moverRecursivo(const char* direcao, int casas) {
    if (casas == 0) return;
    printf("%s\n", direcao);
    moverRecursivo(direcao, casas - 1);
}

// Função de movimentação do Cavalo em L
void moverCavaloL() {
    for (int i = 0; i < 1; i++) {
        printf("Cima\n");
        int j = 0;
        while (j < 2) {
            printf("Direita\n");
            j++;
        }
    }
}

// Menu interativo com switch-case (modo escalável)
void mostrarMenu() {
    printf("\n==== Menu de Movimentacao ====\n");
    printf("1. Torre (5 casas para a direita)\n");
    printf("2. Rainha (8 casas para a esquerda)\n");
    printf("3. Bispo (5 casas na diagonal superior direita)\n");
    printf("4. Cavalo (movimento em L)\n");
    printf("0. Sair\n");
    printf("Escolha uma peca: ");
}

int main() {
    int opcao;

    do {
        mostrarMenu();
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("\nTorre:\n");
                moverRecursivo("Direita", 5);
                break;
            case 2:
                printf("\nRainha:\n");
                moverRecursivo("Esquerda", 8);
                break;
            case 3:
                printf("\nBispo:\n");
                moverDiagonalRecursiva(5);
                break;
            case 4:
                printf("\nCavalo:\n");
                moverCavaloL();
                break;
            case 0:
                printf("\nSaindo...\n");
                break;
            default:
                printf("\nOpcao invalida.\n");
                break;
        }

    } while (opcao != 0);

    return 0;
}

