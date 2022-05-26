/*
  Escreva um algoritmo que faça a leitura de um número referente a um mês e
informe a qual trimestre ele pertence. Informe também quantos dias tem esse mês.
*/
#include <stdio.h>
int main(int argc, char *argv[]) {
  int mes, trimestre, dias;

  printf("Digite o número do mês: ");
  scanf("%d", &mes);
  // VERIFICANDO O TRIMESTRE
  if (mes >= 1 && mes <= 3) {
    trimestre = 1;
  } else if (mes > 3 && mes <= 6) {
    trimestre = 2;
  } else if (mes > 6 && mes <= 9) {
    trimestre = 3;
  } else if (mes > 9 && mes <= 12) {
    trimestre = 4;
  }
  // VERIFICANDO QUANTIDADE DE DIAS
  if (mes == 2) {
    dias = 28;
  } else if (mes == 4 || mes == 6 || mes == 9 || mes == 11) {
    dias = 30;
  } else {
    dias = 31;
  }

  printf("Esse mês é do %dº trimestre e têm %d dias", trimestre, dias);

  return 0;
}
