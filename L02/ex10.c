#include<stdio.h>

int main(){

    float pi, vol;
    int r;

    pi = 3.14159;

    printf("Este programa calcula o voulume de uma esfera baseada em seu raio\n");
    printf("Escolha o raio: ");

    scanf("%d", & r);

    vol = ((4 * pi * r * r * r) / 3.0);
    
    printf("volume = %.3f", vol);

    return 0;
}