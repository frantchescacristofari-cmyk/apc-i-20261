#include <stdio.h>
int main() {
    int opcao = 0;

    printf("Menu jogo:\n");
    printf("1- Novo jogo\n");
    printf("2- Continuar jogo\n");
    printf("3- Ver pontuacao\n");
    printf("4- Sair\n");
    printf("escolha uma opcao de 1 a 4: ");
    scanf("%i", &opcao);

    switch (opcao) {
        case 1: printf("1- Novo jogo"); break;
        case 2: printf("2- Continuar jogo"); break;
        case 3: printf("3- Ver pontuacao"); break;
        case 4: printf("4- Sair"); break;
        default: printf("Opcao invalida. Tente novamente");
    }
    return 0;
}