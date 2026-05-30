#include <stdio.h>  // Biblioteca para entrada e saida

int main() {  // Inicio da funcao principal

    float numero; // Armazena o numero informado

    printf("Digite um numero: "); // Solicita o numero
    scanf("%f", &numero);         // Le o numero

    if (numero > 0) { // Verifica se e positivo
        printf("O numero e positivo.\n");
    }
    else if (numero < 0) { // Verifica se e negativo
        printf("O numero e negativo.\n");
    }
    else { // Caso seja zero
        printf("O numero e zero.\n");
    }

    return 0; // Finaliza o programa

} // Fim da funcao principal