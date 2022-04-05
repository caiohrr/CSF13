#include<stdio.h>

int main(){

  float gasto, dist;
  int qtd_ped;

  printf("Informe a distancia entre em km: ");
  scanf("%f", & dist);
    
  printf("Informe a quantidade de pedagios: ");
  scanf("%d", & qtd_ped);

  
  gasto = (qtd_ped * 8) + (dist / 15.0 * 2.6);

  
  printf("O gasto sera: %f", gasto);
  
  return 0;
}