#include <stdio.h>

int main(){
    int idade;

    printf("Entre com a sua idade: ");
    scanf("%i", &idade);
    while(getchar() != '\n');

    printf("Voce eh uma crianca? %i\n", 
        idade >= 0 && idade <= 12);
    // && => 0 Falso E qualquer coisa = Sempre Falso

    printf("Voce eh um adolescente? %i", idade > 12 && idade < 16);
    printf("Voce eh um jovem? %i", idade >= 16 && idade <= 20);

    // || => 1 Verdadeiro OU qualquer coisa = Sempre Verdadeiro
    printf("Voce tem proridade para vacinar? %i\n", 
        idade <= 6 || idade >= 60);

    return 0;
}