#include <stdio.h>
#include <math.h>

int main() {
  int lado1, lado2, lado3, semi, peri, area;
  printf("Ingrese medida del primer lado del triangulo.\n");
  scanf("%i", &lado1);
  printf("Ingrese medida del segundo lado del triangulo.\n");
  scanf("%i", &lado2);
  printf("Ingrese medida del tercer lado del triangulo.\n");
  scanf("%i", &lado3);
  peri = lado1 + lado2 + lado3;
  semi = (peri) / 2;
  area = sqrt(semi * (semi - lado1) * (semi - lado2) * (semi - lado3));
  printf("El perimetro del triangulo es %i\n", peri);
  printf("El semiperimetro del triangulo es %i\n", semi);
  printf("Y el área del triangulo según Herón es %i\n", area);

  //"lado1 = lado2" || "lado2 = lado3" || "lado3 = lado1"
  printf("Los lados son %i, %i y %i.\n", lado1, lado2, lado3);
  return 0;
}