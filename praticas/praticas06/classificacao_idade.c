#include <stdio.h>
int main() {
    int idade = 0;

    printf("Entre com sua idade: ");
    scanf("%i", &idade);

    int eh_menor_que_13_anos = idade < 13;
    int eh_maior_que_13_anos = idade >= 13;
    int eh_menor_que_18_anos = idade < 18;
    int eh_maior_que_18_anos = idade >= 18;
    int eh_menor_que_65_anos = idade < 65;
    int eh_maior_que_65_anos = idade >= 65;

    if(eh_menor_que_13_anos) {
        printf("Com %i anos voce eh uma crianca", idade);
    }
    if(eh_maior_que_13_anos && eh_menor_que_18_anos) {
        printf("Com %i anos voce eh um adolescente", idade);
    }
    if(eh_maior_que_18_anos && eh_menor_que_65_anos) {
        printf("Com %i anos voce eh um adulto", idade);
    }
    if(eh_maior_que_65_anos) {
        printf("Com %i anos voce eh um idoso", idade);
    }
    return 0;
}
