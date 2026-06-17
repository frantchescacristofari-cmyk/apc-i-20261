#include <stdio.h>
int main() {
    int dia = 0;

    printf("1- Segunda-feira\n");
    printf("2- Terca-feira\n");
    printf ("3- Quarta-feira\n");
    printf("4- Quinta-feira\n");
    printf("5- Sexta-feira\n");
    printf("6- Sabado\n");
    printf("7- Domingo\n");
    printf("Escolha um numero de 1 a 7: ");
    scanf("%i", &dia); 

    switch (dia)
    {
        case 1: printf("Segunda-feira eh dia util"); break;
        case 2: printf("Terca-feira eh dia util"); break;
        case 3: printf("Quarta-feira eh dia util"); break;
        case 4: printf("Quinta-feira eh dia util"); break;
        case 5: printf("Sexta-feira eh dia util"); break;
        case 6: printf("Sabado nao eh dia util"); break;
        case 7: printf("Domingo nao eh dia util"); break;
        default: printf("Opcao invalida. Tente novamente"); break;
    }

    return 0;
}