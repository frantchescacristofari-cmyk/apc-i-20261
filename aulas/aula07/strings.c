#include <stdio.h>
#include <string.h>
int main() {
    char texto[11]; // sabor string
    char *string; // ponteiro para char
    // tamanho da string = qntd do char + 1 do \0

    texto[0] = 'O';
    texto[1] = 'l';
    texto[2] = 'a';
    texto[3] = ' ';
    texto[4] = 'p';
    texto[5] = 'e';
    texto[6] = 's';
    texto[7] = 's';
    texto[8] = 'o';
    texto[9] = 'a';
    texto[10] = '0';

    printf("%s\n", texto);

    texto[3] = '\0';

    printf("%s\n, texto");

    for(int i = 0; i < 11; i++) {
        printf("%c", texto[i]);
    }
    printf("\n");

    // NAO PODE 
    // texto = "Ola";
    // texto = texto + "Pessoal";

    // copia string
    strcpy(texto, "Bom"); // como atribuir uma string
    printf("%s\n", texto);

    // cocatena string
    strcat(texto, "dia");
    printf("%s\n", texto);

    // tamanho da string
    int tamanho = strlen(texto);
    printf("O tamanho do texto e %i\n", tamanho);
    int capacidade = sizeof(texto);
    printf("A capacidade do texto e %i\n", capacidade);

    // preencher com um caracter
    memset(texto, 'a', 8);
    printf("%s\n", texto);

    // limpa a string
    memset(texto, '\0', capacidade);

    int compara = strcmp("banana", "laranja");
    printf("banana == laranja? %i\n", compara);
    // -1 (NEGATIVO pq banana vem antes de laranja na ordem alfabetica);

    compara = strcmp("laranja", "banana");
    printf("laranja == banana? %i\n", compara);
    // 1 (laranja eh depois de banana na ordem alfabetica);

    compara = strcmp("banana", "banana");
    printf("banana == banana? %i\n", compara);
    // 0 (sao iguais)

    compara = strcmp("banana", "BANANA");
    printf("banana == BANANA? %i\n", compara);
    // 1 (maiusculo eh primeiro que minusculo);

    char *tem_letra_a = strchr("sergipe", 'a');
    printf("a palavra sergipe tem letra a? %s\n", tem_letra_a);
    tem_letra_a = strchr("roraima", 'a');
    printf("a palavra roraima tem letra a? %s\n", tem_letra_a);

    char *tem_silva = strstr("joao da silva", "SILVA");
    printf("o nome joao da silva tem SILVA? %s\n, tem_silva");


    return 0;
}