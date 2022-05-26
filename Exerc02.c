/*
Uma revendedora de carros usados paga a seus funcionários vendedores um salário
fixo por mês, mais uma comissão também fixa para cada carro vendido e mais 5%
do valor das vendas por ele efetuadas. Escrever um algoritmo que leia o número
de carros por ele vendidos, o valor total de suas vendas, o salário fixo e o
valor que ele recebe por carro vendido. Calcule e escreva o salário final do
vendedor.

*/

#include <stdio.h>

int main(int argc, char *argv[]) {
  int carrosVend;
  double salaryFix, comissao, totalVendas, salaryFinal;
  const double comissaoFixa = 0.05;

  printf("Digite o numero de carros vendidos pelo vendedor: ");
  scanf("%d", &carrosVend);

  printf("Digite o valor total das vendas do vendedor: ");
  scanf("%lf", &totalVendas);

  printf("Digite o salario Fixo do Vendedor: ");
  scanf("%lf", &salaryFix);

  printf("Digite o valor que o vendedor recebe por carro vendido: ");
  scanf("%lf", &comissao);

  salaryFinal = salaryFix + carrosVend * comissao + totalVendas * comissaoFixa;

  printf("O salario final do vendedor sera R$ %0.2f\n", salaryFinal);

  return 0;
}
