#include <math.h>
#include <stdio.h>
#include <math.h>

int main() {
  float not1, not2, not3, prom;
  printf("Ingrese la primera nota.\n");
  scanf("%f", &not1);
  printf("Ingrese la segunda nota.\n");
  scanf("%f", &not2);
  printf("Ingrese la tercera nota.\n");
  scanf("%f", &not3);
  
  prom = (not1*0.4) + (not2*0.3) + (not3*0.3);
  if (prom <= 3.95){
    printf("El estudiante reprobó la asignatura.");
  } else if (prom>= 3.95 && prom<=4.94){
    printf("El estudiante debe dar examen.");
  } else if(prom>= 4.95){
    printf("El estudiante se exime la asignatura.");
  }
  
  

  return 0;
}