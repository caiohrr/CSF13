#include<stdio.h>
#include<stdlib.h>

int main(){

    int a, b, c, min_ab, min_bc, min;

    printf("Digite tres numeros inteiros entre virgulas, esse programa mostrara o menor deles: ");
    scanf("%d, %d, %d", & a, & b, & c);

    min_ab = (a + b - abs(a - b)) / 2;
    min_bc = (b + c - abs(b - c)) / 2;
    min = (abs(min_ab) + abs(min_bc) - abs(min_ab - min_bc))/2;

    printf("Menor valor:%.d, \n", min);

    return 0;
}