#include<stdio.h>
#include<stdio.h>

int main(){

  int num, notas_50, notas_5, notas_1;

  printf("Valor: ");
  scanf("%d", & num); 

  notas_50 = num / 50;
  notas_5 = (num % 50) / 5;
  notas_1 = notas_5 % 5;

  
  printf("%d notas de 50\n", notas_50);
  printf("%d notas de 5\n", notas_5);
  printf("%d notas de 1\n", notas_1);
  
  return 0;
}