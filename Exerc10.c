/*
10.Dado n, imprimir as n primeiras potências de 2. Exemplo: para n = 5 a saída
deve ser 1, 2, 4, 8, 16.
*/
#include <stdio.h>
int main(int argc, char *argv[]) {
  int n, acumulador;
  printf("Digite o numero de potencias de 2 que devem ser mostradas: ");
  scanf("%d", &n);

  if (n != 0) {
    acumulador = 1;
    printf("As %dª primeiras potencias de 2 são: 1", n);
    for (int i = 0; i < (n - 1); i++) {
      acumulador = acumulador * 2;
      printf(", %d", acumulador);
    }
  } else {
    printf("Você não quer ver nenhuma potencia");
  }
  printf(".");

  return 0;
}
