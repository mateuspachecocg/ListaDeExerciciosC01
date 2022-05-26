/*
  12.Escreva um algoritmo que imprima a tabuada (de 1 a 10) para os números de 1
a 10.
*/

#include <stdio.h>

int main(int argc, char *argv[]) {
  for (int j = 1; j < 11; j++) {
    printf("DO NUMERO %d\t", j);
  }
  printf("\n");

  for (int i = 1; i < 11; i++) {
    // printf("\nTabuada do numero %d.\n", i);
    for (int j = 1; j < 11; j++) {
      printf("%d x %d = %d\t", i, j, i * j);
    }
    printf("\n");
  }
  return 0;
}
