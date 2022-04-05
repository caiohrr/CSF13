#include<stdio.h>
#include<stdlib.h>

int main(){

    int a, b, c, max_ab, max_bc;
    float max;

    printf("Digite tres numeros entre virgulas, esse programa mostrara o maior deles: ");
    scanf("%d, %d, %d", & a, & b, & c);

    max_ab = (a + b + abs(a - b))/2;
    max_bc = (b + c + abs(b - c))/2;
    max = (max_ab + max_bc + abs(max_ab - max_bc))/2.0;

    printf("Maior numero: %.f\n", max);

    return 0;
}