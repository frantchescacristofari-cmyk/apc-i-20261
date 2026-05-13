#include <stdio.h>
int main() {
    int numero = 0;

    printf("Entre com um numero entre 1 e 10: ");
    scanf("%f", &numero);
    // remove o char do buffer ate \n
    while (getchar() != '\n');

    while(numero < 1 || numero > 10) {
        printf("Numero invalido! Tente de novo.\n");
        scanf("%i", &numero);
        while (getchar() != '\n');

    }
    return 0;
}