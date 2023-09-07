#include <stdio.h>
#include <math.h>

int main() {
  float not1, not2, not3, not4, prom;
  printf("Ingrese la primera nota.\n");
  scanf("%f", &not1);
  printf("Ingrese la segunda nota.\n");
  scanf("%f", &not2);
  printf("Ingrese la tercera nota.\n");
  scanf("%f", &not3);
  printf("Ingrese la cuarta nota.\n");
  scanf("%f", &not4);
  prom = (not1 + not2 + not3 + not4) / 4;
  printf("El promedio de las notas ingresadas es %f\n", prom);

  printf("Las notas son %f,%f,%f y %f\n", not1, not2, not3, not4);

  return 0;
}