#include<stdio.h>

int main(){

  int dist;
  float gasto_combust, cons_medio;

  
  printf("Distancia total precorrida: ");
  scanf(" %d", & dist);
  
  printf("\nCombustivel gasto: ");
  scanf(" %f", & gasto_combust);

  cons_medio = (float)dist / gasto_combust;

  printf("\nO consumo medio foi de: %.3f km/L", cons_medio);

  
  return 0;
}