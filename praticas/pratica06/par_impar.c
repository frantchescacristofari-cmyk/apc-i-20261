#include <stdio.h>
int main() {
    int main = 0

    printf("Entre com um numero: ");
    scanf("%i, &numero");

    int numero_par = numero % 2 = 0;
    int numero_impar = numero % 2 != 0;

    if (numero_par) {
        printf("%i eh par", numero);
    }
    if (numero_impar) {
        printf("%i eh impar", numero);
    }
    return 0;
}