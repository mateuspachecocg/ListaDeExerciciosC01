/*
Dado um inteiro positivo n e uma sequência de n inteiros, determinar quantos
números da sequência são positivos e quantos são não-positivos. Um número é não-
positivo se é negativo ou se é igual a 0 (zero).
*/

#include <stdio.h>

int main(int argc, char *argv[]) {
  int n, pos, nPos, readNum;
  pos = 0;
  nPos = 0;
  printf("Digite o número de numeros a serem digitados: ");
  scanf("%d", &n);

  for (int i = 0; i < n; i++) {
    printf("Digite um número: ");
    scanf("%d", &readNum);
    if (readNum > 0) {
      pos++;
    } else {
      nPos++;
    }
  }

  printf("Dos %d numeros digitados %d são positivos e %d são não-positivos.\n",
         n, pos, nPos);
  return 0;
}
