#include <stdio.h>              // Biblioteca necessária para usar printf e scanf

int main()                     // Função principal do programa
{
    int matriz[2][2];          // Cria uma matriz com 2 linhas e 2 colunas
    int i, j;                  // Variáveis de controle dos laços
    int soma = 0;              // Variável que armazenará a soma dos elementos

    // Laço para percorrer as linhas da matriz
    for(i = 0; i < 2; i++)
    {
        // Laço para percorrer as colunas da matriz
        for(j = 0; j < 2; j++)
        {
            printf("Digite o valor para matriz[%d][%d]: ", i, j); // Solicita um valor ao usuário

            scanf("%d", &matriz[i][j]); // Lê o valor digitado e armazena na posição da matriz

            soma = soma + matriz[i][j]; // Adiciona o valor digitado à variável soma
        }
    }

    printf("\nSoma de todos os elementos = %d\n", soma); // Exibe a soma total dos elementos

    return 0; // Finaliza o programa corretamente
}