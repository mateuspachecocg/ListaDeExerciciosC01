/*
  Ler a hora de início e a hora de fim de um jogo de Xadrez (considere apenas
horas inteiras, sem os minutos) e calcule a duração do jogo em horas, sabendo-se
que o tempo máximo de duração do jogo é de 24 horas e que o jogo pode iniciar em
um dia e terminar no dia seguinte.
*/

#include <stdio.h>

int main(int argc, char *argv[]) {
  int horaInicio, horaFim, duracao;

  printf("Digite a hora de inicio do jogo: ");
  scanf("%d", &horaInicio);

  printf("Digite a hora de termino do jogo: ");
  scanf("%d", &horaFim);
  if (horaInicio <= horaFim) {
    duracao = horaFim - horaInicio;
  } else {
    duracao = (horaFim + 24) - horaInicio;
  }

  printf("A duracao do jogo foi de %d horas.", duracao);

  return 0;
}
