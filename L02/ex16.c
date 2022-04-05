#include<stdio.h>

int main(){

    int num, ult_digito;

    printf("Digite um numero e esse programa mostrara seu ultimo digito: ");
    scanf("%d", & num);

    ult_digito = num % 10;

    printf("\nO ultimo digito de %d e: %d", num, ult_digito);

    return 0;

}