#include <stdio.h>  // Biblioteca para entrada e saida

int main() {  // Inicio da funcao principal

    int numero; // Armazena o numero informado

    printf("Digite um numero inteiro: "); // Solicita um numero
    scanf("%d", &numero);                 // Le o numero

    if (numero % 2 == 0) { // Verifica se o resto da divisao por 2 e zero
        printf("O numero e par.\n");
    }
    else { // Caso contrario
        printf("O numero e impar.\n");
    }

    return 0; // Finaliza o programa

} // Fim da funcao principal