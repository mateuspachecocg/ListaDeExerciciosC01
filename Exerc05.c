/*
Ler 3 valores (A, B e C) representando as medidas dos lados de um triângulo e
escrever se formam ou não um triângulo. OBS: para formar um triângulo, o valor
de cada lado deve ser menor que a soma dos outros 2 lados.
*/
#include <stdio.h>
int main(int argc, char *argv[]) {
  double A, B, C;

  printf("Informe três valores para os lados do triângulo: ");
  scanf("%lf%lf%lf", &A, &B, &C);

  if (A < B + C && B < A + C && C < A + B) {
    printf(" FORMAM UM TRIANGULO.");
  } else {
    printf("NÃO FORMAM UM TRIANGULO.");
  }
  return 0;
}
