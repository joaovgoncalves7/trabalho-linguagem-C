#include <stdio.h>                  // Biblioteca para usar printf e scanf

int main()                         // Função principal
{
    int vetor[10];                 // Vetor com 10 posições
    int i;                         // Variável de controle do laço
    int maior;                     // Armazena o maior valor encontrado
    int posicao;                   // Armazena a posição do maior valor

    for(i = 0; i < 10; i++)        // Repete 10 vezes para ler os valores
    {
        printf("Digite um numero: "); // Solicita um número
        scanf("%d", &vetor[i]);       // Armazena no vetor
    }

    maior = vetor[0];             // Assume que o primeiro valor é o maior
    posicao = 0;                  // Assume que a posição do maior é 0

    for(i = 1; i < 10; i++)       // Percorre o restante do vetor
    {
        if(vetor[i] > maior)      // Verifica se encontrou um valor maior
        {
            maior = vetor[i];     // Atualiza o maior valor
            posicao = i;          // Guarda a posição do maior valor
        }
    }

    printf("\nMaior valor: %d", maior);       // Exibe o maior valor
    printf("\nPosicao: %d", posicao);         // Exibe a posição

    return 0;                    // Finaliza o programa
}