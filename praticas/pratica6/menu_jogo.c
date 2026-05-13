#include <stdio.h>
int main() {
    int escolha = 0;
    printf("Sabendo que 1 - Novo jogo, 2 - Continuar jogo, 3 - Ver pontuacao e 4 - Sair, entre com um numero de 1 a 4: ");
    scanf("%i", &escolha);
   

     switch(escolha) {
        case 1: printf("Novo jogo\n"); break;
        case 2: printf("Continuar jogo\n"); break;
        case 3: printf("Ver pontuacao\n"); break;
        case 4: printf("Sair\n"); break;
        default: printf("Numero invalido! Tente de novo.\n");
    }
     return 0;
}