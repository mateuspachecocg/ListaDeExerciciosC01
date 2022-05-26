/*
11.Dado um número natural na base binária, transformá-lo para a base decimal.
Exemplo: Dado 10010 a saída será 18, pois 1 ∗ 2
4 + 0 ∗ 2
3 + 0 ∗ 2
2 + 1 ∗ 2
1 + 0 ∗
2
0 = 18.
*/

#include <stdio.h>
int main(int argc, char *argv[]) {

  int binario, decimal, acumulador;

  printf("Digite um número binario: ");
  scanf("%d", &binario);
  acumulador = 1;
  decimal = 0;
  printf("O número binario %d ", binario);
  while (binario != 0) {
    if (binario % 10 == 0) {
      binario = binario / 10;
    } else {
      decimal += acumulador;
      binario = (binario - 1) / 10;
    }
    acumulador = acumulador * 2;
  }

  printf(" representado pelo %d na base decimal.\n", decimal);
  /*char bin[100];

  printf("Digite um número binario: ");
  scanf("%s", bin);

  for (int i = 0; i < ; inc-expression) {
  statements
  }*/
  return 0;
}
