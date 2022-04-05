#include<stdio.h>

int main(){

    int i1, i2, divis, rest;

    printf("Insira dois valores inteiros separados por virgula:\n");
    scanf("%d, %d", & i1, & i2);

    divis = i1 / i2;

    rest = i1 % i2;

    printf("Resultado da divisao entre %d, e %d: %d\n", i1, i2, divis);

    printf("Resto da divisao entre %d, e %d: %d", i1, i2, rest);

    return 0;
}