#include <stdio.h>

/*
  O custo de um carro novo ao consumidor é a soma do custo de fábrica com a
porcentagem do distribuidor e dos impostos (aplicados ao custo de fábrica).
Supondo que o percentual do distribuidor seja de 28% e os impostos de 45%,
escrever um algoritmo para ler o custo de fábrica de um carro, calcular e
escrever o custo final ao consumidor.
  */

int main(int argc, char *argv[]) {
  double custoFab, custoFinal;

  printf("Qual o custo de fabricação do carro?\n");
  scanf("%lf", &custoFab);

  custoFinal = custoFab * (1 + 0.28 + 0.45);

  printf("O custo final ao consumidor do veículo sera R$ %0.2f\n", custoFinal);

  return 0;
}
