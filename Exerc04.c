/*
  Ler o salário fixo e o valor das vendas efetuadas pelo vendedor de uma
empresa. Sabendo-se que ele recebe uma comissão de 3% sobre o total das vendas
até R$ 1.500,00 mais 5% sobre o que ultrapassar este valor, calcular e escrever
o seu salário total.
*/
#include <stdio.h>

int main(int argc, char *argv[]) {
  double salarioTotal, salarioFixo, totalVendas;
  const double comVendas = 0.03;
  const double comVendasExtra = 0.05;

  printf("Digite o salario fixo do vendedor: ");
  scanf("%lf", &salarioFixo);
  printf("Digite o valor das vendas efetuadas pelo vendedor: ");
  scanf("%lf", &totalVendas);

  if (totalVendas <= 1500.0) {
    salarioTotal = totalVendas * comVendas + salarioFixo;
  } else {
    salarioTotal = 1500.0 * comVendas +
                   (totalVendas - 1500.0) * comVendasExtra + salarioFixo;
  }

  printf("O salario do vendedor sera R$ %0.2f\n", salarioTotal);

  return 0;
}
