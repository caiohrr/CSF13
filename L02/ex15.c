#include<stdio.h>

int main(){

  int iSeg, seg, min, hor, dia;

  printf("Digite o tempo em segundos: ");
  scanf("%d", & iSeg);
  
  seg = iSeg % 60;
  min = (iSeg % 3600) / 60;
  hor = iSeg % 86400 / 3600;
  dia = iSeg / 86400;

  printf("%d segundos sao: %d dias, %d horas, %d minutos, %d segundos.", iSeg, dia, hor, min, seg);

  return 0;
}