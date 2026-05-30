#include <stdio.h> // Biblioteca para usar printf e scanf

int main(void) { // Funcao principal do programa
  double a; // Armazena o primeiro numero
  double b; // Armazena o segundo numero

  printf("Digite o primeiro numero: "); // Solicita o primeiro numero
  if (scanf("%lf", &a) != 1) { // Le o primeiro numero e valida a leitura
    printf("Entrada invalida.\n"); // Informa erro de entrada
    return 1; // Encerra o programa com erro
  }

  printf("Digite o segundo numero: "); // Solicita o segundo numero
  if (scanf("%lf", &b) != 1) { // Le o segundo numero e valida a leitura
    printf("Entrada invalida.\n"); // Informa erro de entrada
    return 1; // Encerra o programa com erro
  }

  printf("Soma: %.2f\n", a + b); // Calcula e mostra a soma
  printf("Subtracao: %.2f\n", a - b); // Calcula e mostra a subtracao
  printf("Multiplicacao: %.2f\n", a * b); // Calcula e mostra a multiplicacao

  if (b == 0.0) { // Verifica se o divisor e zero
    printf("Divisao: indefinida (divisor = 0)\n"); // Informa que nao da para dividir
  } else {
    printf("Divisao: %.2f\n", a / b); // Calcula e mostra a divisao
  }

  return 0; // Encerra o programa com sucesso
}
