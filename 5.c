#include <stdio.h> // Biblioteca para usar printf e scanf

int main(void) { // Funcao principal do programa
  double media; // Armazena a media do aluno
  double frequencia; // Armazena a frequencia do aluno em porcentagem

  printf("Digite a media do aluno (0 a 10): "); // Solicita a media
  if (scanf("%lf", &media) != 1) { // Le a media e valida a leitura
    printf("Entrada invalida.\n"); // Informa erro de entrada
    return 1; // Encerra o programa com erro
  }

  printf("Digite a frequencia do aluno (0 a 100): "); // Solicita a frequencia
  if (scanf("%lf", &frequencia) != 1) { // Le a frequencia e valida a leitura
    printf("Entrada invalida.\n"); // Informa erro de entrada
    return 1; // Encerra o programa com erro
  }

  int mediaOk = (media >= 7.0); // Verifica se media >= 7
  int freqOk = (frequencia >= 75.0); // Verifica se frequencia >= 75

  int aprovado = mediaOk && freqOk; // Usa && (precisa cumprir as duas condicoes)
  int reprovado = !aprovado; // Usa ! (negacao)
  int atendeAlguma = mediaOk || freqOk; // Usa || (cumpre pelo menos uma condicao)

  if (aprovado) { // Se aprovado for verdadeiro
    printf("Aprovado.\n"); // Mostra aprovado
  } else {
    printf("Reprovado.\n"); // Mostra reprovado
  }

  if (reprovado && atendeAlguma) { // Exemplo combinando !, && e ||
    printf("Atendeu pelo menos uma condicao, mas nao as duas.\n"); // Mostra mensagem extra
  }

  return 0; // Encerra o programa com sucesso
}
