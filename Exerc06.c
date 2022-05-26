/*
Escreva um algoritmo para ler 2 valores e se o segundo valor informado for ZERO,
deve ser lido um novo valor, ou seja, para o segundo valor não pode ser aceito o
valor zero e imprimir o resultado da divisão do primeiro valor lido pelo segundo
valor lido. Deve ser informado “VALOR INVÁLIDO. INFORME OUTRO NÚMERO.”
enquanto o usuário fornecer o valor 0.
*/

#include <stdio.h>

int main(int argc, char *argv[]) {
  double A, B;

  printf("Digite o primeiro valor: ");
  scanf("%lf", &A);
  do {
    printf("Digite o segundo valor: ");
    scanf("%lf", &B);
    if (B == 0.0) {
      printf("Valor infomado invalido.\n");
    }
  } while (B == 0.0);

  printf("A divisão de A por B é: %0.2f\n", A / B);
  return 0;
}
