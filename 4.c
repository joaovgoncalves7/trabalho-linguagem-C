#include <stdio.h> // Biblioteca para usar printf e scanf

int main(void) { // Funcao principal do programa
  int a; // Armazena o primeiro numero inteiro
  int b; // Armazena o segundo numero inteiro

  printf("Digite o primeiro numero inteiro: "); // Solicita o primeiro inteiro
  if (scanf("%d", &a) != 1) { // Le o primeiro inteiro e valida a leitura
    printf("Entrada invalida.\n"); // Informa erro de entrada
    return 1; // Encerra o programa com erro
  }

  printf("Digite o segundo numero inteiro: "); // Solicita o segundo inteiro
  if (scanf("%d", &b) != 1) { // Le o segundo inteiro e valida a leitura
    printf("Entrada invalida.\n"); // Informa erro de entrada
    return 1; // Encerra o programa com erro
  }

  if (a == b) { // Verifica se os numeros sao iguais
    printf("Sao iguais.\n"); // Informa que sao iguais
  } else {
    printf("Nao sao iguais.\n"); // Informa que nao sao iguais
  }

  if (a > b) { // Verifica se o primeiro e maior
    printf("O primeiro e maior.\n"); // Informa que o primeiro e maior
  } else if (b > a) { // Verifica se o segundo e maior
    printf("O segundo e maior.\n"); // Informa que o segundo e maior
  } else {
    printf("Nenhum e maior (sao iguais).\n"); // Caso de igualdade
  }

  return 0; // Encerra o programa com sucesso
}
