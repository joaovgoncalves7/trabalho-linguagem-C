#include <stdio.h>  // Biblioteca para entrada e saída

int main() {  // Início da função principal

    float celsius;     // Armazena a temperatura em Celsius
    float fahrenheit;  // Armazena a temperatura em Fahrenheit

    printf("Digite a temperatura em Celsius: "); // Solicita a temperatura
    scanf("%f", &celsius);                       // Lê a temperatura

    fahrenheit = (9 * celsius / 5) + 32; // Fórmula de conversão

    printf("Temperatura em Fahrenheit: %.2f\n", fahrenheit); // Exibe o resultado

    return 0; // Finaliza o programa

} // Fim da função principal