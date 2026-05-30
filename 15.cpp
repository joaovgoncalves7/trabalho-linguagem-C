#include <stdio.h>                  // Biblioteca para entrada e saída

int main()                         // Função principal
{
    int numero;                    // Armazena o número digitado
    int soma = 0;                  // Acumulador da soma
    int i;                         // Variável de controle

    for(i = 1; i <= 5; i++)        // Repete 5 vezes
    {
        printf("Digite o %d numero: ", i); // Solicita um número
        scanf("%d", &numero);             // Lê o número

        soma = soma + numero;             // Soma ao acumulador
    }

    printf("\nSoma total = %d", soma); // Exibe a soma final

    return 0;                           // Finaliza o programa
}