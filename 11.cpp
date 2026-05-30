#include <stdio.h>                  // Biblioteca para entrada e saída

int main()                         // Função principal
{
    float nota1;                   // Primeira nota
    float nota2;                   // Segunda nota
    float media;                   // Média das notas

    printf("Digite a primeira nota: "); // Solicita a primeira nota
    scanf("%f", &nota1);              // Lê a primeira nota

    printf("Digite a segunda nota: "); // Solicita a segunda nota
    scanf("%f", &nota2);              // Lê a segunda nota

    media = (nota1 + nota2) / 2;      // Calcula a média

    if(media >= 7)                    // Verifica se foi aprovado
    {
        printf("Aprovado");
    }
    else if(media >= 5)               // Verifica se está em recuperação
    {
        printf("Recuperacao");
    }
    else                              // Caso contrário
    {
        printf("Reprovado");
    }

    return 0;                         // Finaliza o programa
}