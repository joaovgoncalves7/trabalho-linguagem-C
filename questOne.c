#include <stdio.h> // Biblioteca para usar printf

int main(void) { // Funcao principal do programa
  int idade; // Declara a variavel inteira idade
  float altura; // Declara a variavel float altura
  char inicial; // Declara a variavel char inicial

  idade = 20; // Armazena um valor de exemplo para idade
  altura = 1.60f; // Armazena um valor de exemplo para altura
  inicial = 'L'; // Armazena um valor de exemplo para inicial

  printf("Idade: %d\n", idade); // Exibe a idade
  printf("Altura: %.2f\n", altura); // Exibe a altura com 2 casas decimais
  printf("Inicial do nome: %c\n", inicial); // Exibe a inicial

  return 0; // Encerra o programa com sucesso
}
