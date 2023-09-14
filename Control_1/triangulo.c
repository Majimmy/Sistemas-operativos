#include <stdio.h>

int triangulo() {
  int lado1, lado2, lado3;
  printf("Ingrese medida del primer lado del triangulo.\n");
  scanf("%i", &lado1);
  printf("Ingrese medida del segundo lado del triangulo.\n");
  scanf("%i", &lado2);
  printf("Ingrese medida del tercer lado del triangulo.\n");
  scanf("%i", &lado3);

  if (lado1 == lado2 && lado2 == lado3 && lado3 == lado1) {
    printf("El triangulo es equilatero.\n");
  } else if (lado1 == lado2 || lado2 == lado3 || lado3 == lado1) {
    printf("El triangulo es isóceles.\n");
  } else {
    printf("El triangulo es escaleno.\n");
  }
  //"lado1 = lado2" || "lado2 = lado3" || "lado3 = lado1"
  printf("Los lados son %i, %i y %i.\n", lado1, lado2, lado3);
  return 0;
}