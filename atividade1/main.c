#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

int novo_angulo() {
  int x;
  printf("Digite o novo ângulo: ");
  scanf("%d", &x);
  return x;
}
int main(int argc, char *argv[]) {
  int angulo = 90;
  int menu = 0;
  while (menu != 9) {
    if (angulo >= 0) {
      printf("Seno do angulo %d⁰ resulta em: %.4lf⁰\n", angulo, sin(angulo));
      printf("Cosseno do angulo %d⁰ resulta em: %.4lf⁰\n", angulo, cos(angulo));
      printf("Tangente do angulo %d⁰ resulta em: %.4lf⁰\n", angulo,
             tan(angulo));
    } else {
      printf("Angulo é menor do que 0, impossível realizar o cálculo\n");
    }
    printf("Deseja recalcular com outro ângulo?\nSim: 0 \tNão: 9\tEscolha:  ");
    scanf("%d", &menu);
    if (menu == 0)
      angulo = novo_angulo();
  }

  printf("Saindo do programa...");

  return EXIT_SUCCESS;
}
