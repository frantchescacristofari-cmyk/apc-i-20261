#include <stdio.h>

int main() {
    int opcao = 0;

    printf("1 - Novo jogo");
    printf("2 - Continuar jogo");
    printf("3 - Ver pontuacao");
    printf("4 - Sair");
    printf("Entre com um numero de 1 a 4: ")
    scanf("%i", &opcao);

    switch(opcao) {
        case 1: printf("1-Novo jogo\n"); break;
        case 2: printf("2-Continuar jogo\n"); break;
        case 3: printf("3-Ver pontuacao\n"); break;
        case 4: printf("4-Sair\n"); break;
        default: printf("Opcao invalida! Tente novamente.\n");
    }
    return 0;
}