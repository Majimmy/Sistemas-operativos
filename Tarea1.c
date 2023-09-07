#include <stdio.h>

int Tarea1() {
  int num, CantImpares = 0;
  printf("Números impares\n");
  for (num = 1; num <= 100; num++) {
    if (num % 2 != 0) {
      CantImpares++;
      printf("impar [%i]\n", num);
    }
  }

  return 0;
}

