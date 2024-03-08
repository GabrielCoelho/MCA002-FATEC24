#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

double converte_radiano(double x) { return (x * M_PI / 180); }
double novo_angulo() {
  double x;
  printf("Digite o novo ângulo: ");
  scanf("%lf", &x);
  return x;
}
int main(int argc, char *argv[]) {
  double angulo = 180.0;
  int menu = 0;
  while (menu != 9) {
    if (angulo >= 0) {
      printf("Seno do angulo %.1lf⁰ resulta em: %.4lf⁰\n", angulo,
             sin(converte_radiano(angulo)));
      printf("Cosseno do angulo %.1lf⁰ resulta em: %.4lf⁰\n", angulo,
             cos(converte_radiano(angulo)));
      if (angulo == 90 || angulo == 270) {
        printf("Tangente do angulo %.1lf⁰ resulta em: INEXISTENTE\n", angulo);
      } else {
        printf("Tangente do angulo %.1lf⁰ resulta em: %.4lf⁰\n", angulo,
               fabs(tan(converte_radiano(angulo))) < 1e-6
                   ? 0.0
                   : tan(converte_radiano(angulo)));
      }
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
