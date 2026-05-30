#include <stdio.h>  // Biblioteca para entrada e saída de dados

int main() {  // Início da função principal

    char nome[50];      // Variável para armazenar o nome
    int idade;          // Variável para armazenar a idade
    char cidade[50];    // Variável para armazenar a cidade

    printf("Digite seu nome: ");  // Solicita o nome ao usuário
    scanf("%49s", nome);          // Lê o nome digitado (até 49 caracteres)

    printf("Digite sua idade: "); // Solicita a idade ao usuário
    scanf("%d", &idade);          // Lê a idade digitada

    printf("Digite sua cidade: "); // Solicita a cidade ao usuário
    scanf("%49s", cidade);         // Lê a cidade digitada (até 49 caracteres)

    printf("\n=== DADOS CADASTRADOS ===\n"); // Exibe um título

    printf("Nome: %s\n", nome);     // Exibe o nome informado
    printf("Idade: %d\n", idade);   // Exibe a idade informada
    printf("Cidade: %s\n", cidade); // Exibe a cidade informada

    return 0; // Indica que o programa terminou corretamente

} // Fim da função principal