/*
Escreva um algoritmo que faça a leitura de uma letra e informe se a letra é uma
vogal ou uma consoante.
*/

#include <stdio.h>

int main(int argc, char *argv[]) {
  int condicao;
  char letra;
  printf("Digite uma letra: ");
  scanf("%c", &letra);

  condicao = (letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' ||
              letra == 'u' || letra == 'A' || letra == 'O' || letra == 'E' ||
              letra == 'I' || letra == 'U');
  if (condicao) {
    printf("É uma vogal.");
  } else {
    printf("Não é uma vogal.");
  }
  return 0;
}
