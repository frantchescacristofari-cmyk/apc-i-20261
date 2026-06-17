#include <string.h>
#include <stdio.h>

#define TAM_MAX 10

// Definição da struct personalizada conforme o requisito (e)
struct Produto {
int id;
char nome[50];
int quantidade;
float preco;
};

int main() {
// Vetor de estruturas com 10 posições e controle de registros
struct Produto estoque[TAM_MAX];
int total_registros = 0;

int opcao = 0;

// Menu Principal Interativo - Execução contínua até a opção de saída (requisito b)
while (opcao != 6) {
printf("\n===================================\n");
printf(" SISTEMA DE GESTAO DE ESTOQUE\n");
printf("===================================\n");
printf("1. Cadastrar Produto\n");
printf("2. Listar Produtos\n");
printf("3. Buscar Produto por ID\n");
printf("4. Atualizar Produto\n");
printf("5. Remover Produto\n");
printf("6. Sair do Programa\n");
printf("===================================\n");
printf("Escolha uma opcao: ");

// Validação básica de entrada para o menu
if (scanf("%d", &opcao) != 1) {
printf("\n[ERRO] Entrada invalida! Digite apenas numeros.\n");
while (getchar() != '\n'); // Limpa o buffer
continue;
}
while (getchar() != '\n'); // Limpa o buffer após a leitura do número

// Estrutura de decisão para as funcionalidades (requisito a)
if (opcao == 1) {
// C - CREATE (Cadastrar)
printf("\n--- CADASTRAR PRODUTO ---\n");

if (total_registros >= TAM_MAX) {
printf("[ERRO] Limite de armazenamento atingido (%d produtos).\n", TAM_MAX);
} else {
int novo_id;
int id_duplicado = 0;

printf("Digite o ID unico do produto: ");
if (scanf("%d", &novo_id) != 1 || novo_id <= 0) {
printf("[ERRO] ID invalido! Deve ser um numero inteiro positivo.\n");
while (getchar() != '\n');
} else {
while (getchar() != '\n');

// Validação de ID duplicado (requisito d)
for (int i = 0; i < total_registros; i++) {
if (estoque[i].id == novo_id) {
id_duplicado = 1;
break;
}
}

if (id_duplicado) {
printf("[ERRO] Ja existe um produto cadastrado com o ID %d.\n", novo_id);
} else {
estoque[total_registros].id = novo_id;

printf("Digite o nome do produto: ");
fgets(estoque[total_registros].nome, 50, stdin);
// Remove a quebra de linha (\n) capturada pelo fgets
estoque[total_registros].nome[strcspn(estoque[total_registros].nome, "\n")] = '\0';

printf("Digite a quantidade em estoque: ");
if (scanf("%d", &estoque[total_registros].quantidade) != 1 || estoque[total_registros].quantidade < 0) {
printf("[ERRO] Quantidade invalida! Definida como 0.\n");
estoque[total_registros].quantidade = 0;
}
while (getchar() != '\n');

printf("Digite o preco do produto: ");
if (scanf("%f", &estoque[total_registros].preco) != 1 || estoque[total_registros].preco < 0.0) {
printf("[ERRO] Preco invalido! Definido como 0.00.\n");
estoque[total_registros].preco = 0.0;
}
while (getchar() != '\n');

total_registros++;
printf("\n[SUCESSO] Produto cadastrado com sucesso!\n");
}
}
}

} else if (opcao == 2) {
// R - READ (Listar todos)
printf("\n--- LISTA DE PRODUTOS CADASTRADOS ---\n");

// Validação de vetor vazio (requisito d)
if (total_registros == 0) {
printf("[AVISO] Nenhum produto cadastrado no sistema.\n");
} else {
for (int i = 0; i < total_registros; i++) {
printf("ID: %d | Nome: %s | Qtd: %d | Preco: R$ %.2f\n",
estoque[i].id, estoque[i].nome, estoque[i].quantidade, estoque[i].preco);
}
printf("Total de registros: %d/%d\n", total_registros, TAM_MAX);
}

} else if (opcao == 3) {
// R - READ (Buscar por ID)
printf("\n--- BUSCAR PRODUTO PELO ID ---\n");

if (total_registros == 0) {
printf("[AVISO] Operacao indisponivel. Nao ha produtos cadastrados.\n");
} else {
int id_busca;
int encontrado = 0;

printf("Digite o ID do produto que deseja buscar: ");
scanf("%d", &id_busca);
while (getchar() != '\n');

for (int i = 0; i < total_registros; i++) {
if (estoque[i].id == id_busca) {
printf("\n[Produto Encontrado]\n");
printf("ID: %d\nNome: %s\nQuantidade: %d\nPreco: R$ %.2f\n",
estoque[i].id, estoque[i].nome, estoque[i].quantidade, estoque[i].preco);
encontrado = 1;
break;
}
}

if (!encontrado) {
printf("[ERRO] Produto com ID %d nao foi encontrado.\n", id_busca);
}
}

} else if (opcao == 4) {
// U - UPDATE (Atualizar)
printf("\n--- ATUALIZAR PRODUTO ---\n");

if (total_registros == 0) {
printf("[AVISO] Operacao indisponivel. Nao ha produtos cadastrados.\n");
} else {
int id_busca;
int encontrado = 0;

printf("Digite o ID do produto que deseja atualizar: ");
scanf("%d", &id_busca);
while (getchar() != '\n');

for (int i = 0; i < total_registros; i++) {
if (estoque[i].id == id_busca) {
encontrado = 1;
printf("\nProduto atual: %s (Qtd: %d | Preco: R$ %.2f)\n", estoque[i].nome, estoque[i].quantidade, estoque[i].preco);

printf("Digite o novo nome do produto: ");
fgets(estoque[i].nome, 50, stdin);
estoque[i].nome[strcspn(estoque[i].nome, "\n")] = '\0';

printf("Digite a nova quantidade: ");
if (scanf("%d", &estoque[i].quantidade) != 1 || estoque[i].quantidade < 0) {
printf("[ERRO] Valor invalido. Mantendo quantidade anterior.\n");
}
while (getchar() != '\n');

printf("Digite o novo preco: ");
if (scanf("%f", &estoque[i].preco) != 1 || estoque[i].preco < 0.0) {
printf("[ERRO] Valor invalido. Mantendo preco anterior.\n");
}
while (getchar() != '\n');

printf("\n[SUCESSO] Dados do produto atualizados com sucesso!\n");
break;
}
}

if (!encontrado) {
printf("[ERRO] Produto com ID %d nao encontrado para atualizacao.\n", id_busca);
}
}

} else if (opcao == 5) {
// D - DELETE (Remover)
printf("\n--- REMOVER PRODUTO ---\n");

if (total_registros == 0) {
printf("[AVISO] Operacao indisponivel. Nao ha produtos cadastrados.\n");
} else {
int id_busca;
int encontrado = 0;

printf("Digite o ID do produto que deseja remover: ");
scanf("%d", &id_busca);
while (getchar() != '\n');

for (int i = 0; i < total_registros; i++) {
if (estoque[i].id == id_busca) {
encontrado = 1;

// Reorganização do vetor para manter a consistência física (requisito e)
// Move todos os elementos subsequentes uma posição para trás
for (int j = i; j < total_registros - 1; j++) {
estoque[j] = estoque[j + 1];
}

total_registros--; // Decrementa o controle de tamanho
printf("\n[SUCESSO] Produto removido com sucesso!\n");
break;
}
}

if (!encontrado) {
printf("[ERRO] Produto com ID %d nao encontrado para remocao.\n", id_busca);
}
}

} else if (opcao == 6) {
printf("\nEncerrando o sistema. Ate logo!\n");
} else {
printf("\n[ERRO] Opcao invalida! Escolha uma opcao de 1 a 6.\n");
}
}

return 0;
}