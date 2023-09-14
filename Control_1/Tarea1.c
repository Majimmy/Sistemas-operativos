#include <stdio.h>

int main() {
  int num, CantImpares = 0, total = 0;
  printf("Números impares\n");
  for (num = 1; num <= 100; num++) {
    if (num % 2 != 0) {
      total = num + total;
      CantImpares++;
      printf("impar [%i]\n", num);
      printf("total [%i]\n", total);
    }
  }
  printf("El total final es %i\n", total);

  return 0;
}

