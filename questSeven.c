#include <stdio.h>  // Biblioteca para entrada e saída de dados

int main() {  // Início da função principal

    int numero;  // Variável para armazenar o número informado

    printf("Digite um numero inteiro: ");  // Solicita um número ao usuário
    scanf("%d", &numero);                  // Lê o número digitado

    printf("Antecessor: %d\n", numero - 1); // Exibe o antecessor
    printf("Sucessor: %d\n", numero + 1);   // Exibe o sucessor

    return 0; // Finaliza o programa

} // Fim da função principal