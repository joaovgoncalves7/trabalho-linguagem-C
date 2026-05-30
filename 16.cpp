#include <stdio.h>                 // Biblioteca para entrada e saída

int main()                        // Função principal
{
    int numero;                   // Número digitado pelo usuário
    int i;                        // Variável de controle
    long long fatorial = 1;       // Armazena o resultado do fatorial

    printf("Digite um numero: "); // Solicita um número
    scanf("%d", &numero);         // Lê o número

    for(i = 1; i <= numero; i++)  // Repete até o número digitado
    {
        fatorial = fatorial * i;  // Multiplica o resultado atual por i
    }

    printf("Fatorial = %lld", fatorial); // Exibe o resultado

    return 0;                     // Finaliza o programa
}