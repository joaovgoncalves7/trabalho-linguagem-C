#include <stdio.h>              // Biblioteca necessária para usar printf e scanf

int main()                     // Função principal do programa
{
    int matriz[3][3];          // Cria uma matriz com 3 linhas e 3 colunas
    int i, j;                  // Variáveis de controle dos laços de repetição

    // Laço para percorrer as linhas da matriz
    for(i = 0; i < 3; i++)
    {
        // Laço para percorrer as colunas da matriz
        for(j = 0; j < 3; j++)
        {
            printf("Digite o valor para matriz[%d][%d]: ", i, j); // Solicita um valor para a posição atual

            scanf("%d", &matriz[i][j]); // Lê o valor digitado e armazena na posição correspondente
        }
    }

    printf("\nElementos da diagonal principal:\n"); // Exibe um título antes de mostrar os elementos

    // Laço para percorrer a diagonal principal
    for(i = 0; i < 3; i++)
    {
        printf("%d ", matriz[i][i]); // Exibe os elementos onde linha = coluna
    }

    return 0; // Finaliza o programa corretamente
}