#include<stdio.h>

int main(){

  float temp_c,  temp_f;

  printf("digite a temperatura em: C: ");
  scanf("%f", & temp_c);

  temp_f = (temp_c * 9 / 5) + 32;
  
  printf("temperatura em F %f", temp_f);
  
  return 0;
}