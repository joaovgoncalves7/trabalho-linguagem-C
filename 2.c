#include <stdio.h> // Biblioteca para usar printf e scanf

int main(void) { // Funcao principal do programa
  int a; // Armazena o primeiro numero inteiro
  int b; // Armazena o segundo numero inteiro

  printf("Digite o primeiro numero inteiro: "); // Solicita o primeiro numero
  if (scanf("%d", &a) != 1) { // Le o primeiro numero e valida a leitura
    printf("Entrada invalida.\n"); // Informa erro de entrada
    return 1; // Encerra o programa com erro
  }

  printf("Digite o segundo numero inteiro: "); // Solicita o segundo numero
  if (scanf("%d", &b) != 1) { // Le o segundo numero e valida a leitura
    printf("Entrada invalida.\n"); // Informa erro de entrada
    return 1; // Encerra o programa com erro
  }

  printf("Soma: %d\n", a + b); // Calcula e mostra a soma

  if (b == 0) { // Verifica se o divisor e zero
    printf("Divisao inteira: indefinida (divisor = 0)\n"); // Divisao inteira nao existe
    printf("Divisao real (casting): indefinida (divisor = 0)\n"); // Divisao real nao existe
    return 0; // Encerra o programa normalmente
  }

  printf("Divisao inteira: %d\n", a / b); // Divisao inteira (trunca a parte decimal)
  printf("Divisao real (casting): %.2f\n", (double)a / (double)b); // Divisao real usando casting

  return 0; // Encerra o programa com sucesso
}
