#include <stdio.h>
int main() {
    int numero inteiro = 0;

    printf("Entre com um numero inteiro: ");
    scanf("%i", &numero inteiro);

    int o_numero_eh_par = mod(numero_inteiro,2) = 0;
    int o_numero_nao_eh_par = mod(numero_inteiro,2) != 0;

    if(o_numero_eh_par) {
        printf("%i eh par", numero inteiro);
    } else if(o_numero_nao_eh_par) {
        printf("%i eh impar", numero inteiro);
    }
    return 0;
}