#include <stdio.h>

int main() {
    printf("Entre com um numero: ");
    scanf("%i", &numero);

    int par = numero % 2 = 0;
    int impar = numero % 2 != 0;

    if (par) {
        printf("%i eh par", numero);
    }
    if (impar) {
        printf("%i eh impar");
    }

}