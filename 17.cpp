#include <stdio.h>              // Biblioteca para entrada e saída

int main()                     // Função principal
{
    int vetor[5];              // Cria um vetor com 5 posições
    int i;                     // Variável de controle

    for(i = 0; i < 5; i++)     // Lê os 5 valores
    {
        printf("Digite um valor: "); // Solicita um valor
        scanf("%d", &vetor[i]);      // Armazena no vetor
    }

    printf("\nElementos do vetor:\n"); // Título da saída

    for(i = 0; i < 5; i++)     // Percorre o vetor
    {
        printf("%d ", vetor[i]); // Exibe cada elemento
    }

    return 0;                  // Finaliza o programa
}