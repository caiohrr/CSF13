#include<stdio.h>

int main(){

    float b, h, p;

    printf("Este programa calcula o perimetro de um retangulo.\n");
    printf("Digite, respectivamente, os valores da base e da altura entre virgulas: ");
    scanf("%f, %f", & b, & h);

    p = 2 * b + 2 * h;

    printf("%f", p);


    return 0;
}