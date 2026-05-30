#include <stdio.h>                  // Inclui a biblioteca padrão para usar printf e scanf

int main()                          // Início da função principal do programa
{
    float num1;                     // Declara a variável que armazenará o primeiro número
    float num2;                     // Declara a variável que armazenará o segundo número
    float resultado;                // Declara a variável que armazenará o resultado da operação
    char operacao;                  // Declara a variável que armazenará o operador (+, -, * ou /)

    printf("Digite o primeiro numero: "); // Exibe uma mensagem solicitando o primeiro número
    scanf("%f", &num1);                   // Lê o primeiro número digitado e armazena em num1

    printf("Digite o segundo numero: ");  // Exibe uma mensagem solicitando o segundo número
    scanf("%f", &num2);                   // Lê o segundo número digitado e armazena em num2

    printf("Digite a operacao (+,-,*,/): "); // Solicita ao usuário a operação desejada
    scanf(" %c", &operacao);                // Lê o caractere da operação e armazena em operacao

    switch(operacao)                  // Analisa qual operação foi escolhida
    {
        case '+':                     // Caso a operação seja soma
            resultado = num1 + num2;  // Soma os dois números
            printf("Resultado = %.2f", resultado); // Exibe o resultado com 2 casas decimais
            break;                    // Encerra este caso do switch

        case '-':                     // Caso a operação seja subtração
            resultado = num1 - num2;  // Subtrai o segundo número do primeiro
            printf("Resultado = %.2f", resultado); // Exibe o resultado
            break;                    // Encerra este caso do switch

        case '*':                     // Caso a operação seja multiplicação
            resultado = num1 * num2;  // Multiplica os dois números
            printf("Resultado = %.2f", resultado); // Exibe o resultado
            break;                    // Encerra este caso do switch

        case '/':                     // Caso a operação seja divisão
            resultado = num1 / num2;  // Divide o primeiro número pelo segundo
            printf("Resultado = %.2f", resultado); // Exibe o resultado
            break;                    // Encerra este caso do switch

        default:                      // Executa se nenhuma operação válida for digitada
            printf("Operacao invalida"); // Informa que a operação é inválida
    }

    return 0;                         // Finaliza o programa e retorna sucesso ao sistema
}