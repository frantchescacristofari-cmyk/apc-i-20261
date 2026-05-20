#include <stdio.h>
int main() {
    int dia = 0;

    printf("1-Segunda-feira");
    printf("2-Terca-feira");
    printf("3-Quarta-feira");
    printf("4-Quinta-feira");
    printf("5-Sexta-feira");
    printf("6-Sabado");
    printf("7-Domingo");
    printf("Escolha um dia de 1 a 7: ");
    scanf("%i", &dia);

    switch(dia) {
        case 1: printf("Segunda-feira eh um dia util\n"); break;
        case 2: printf("Terca-feira eh um dia util\n"); break;
        case 3: printf("Quarta-feira eh um dia util\n"); break;
        case 4: printf("Quinta-feira eh um dia util\n"); break;
        case 5: printf("Sexta-feira eh um dia util\n"); break;
        case 6: printf("Sabado eh fim de semana\n"); break;
        case 7: printf("Domingo eh fim de semana\n"); break;
        default: printf("Dia invalido! Tente novamente.\n");
    }

    return 0;
}