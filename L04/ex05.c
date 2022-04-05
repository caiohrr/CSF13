#include<stdio.h>

int main(){

    float A, G, Ra, Rg;


    printf("Digite o preco do litro do alcool: ");
    scanf("%f", & A);
    printf("\nDigite o rendimento(km/L) do carro utilizando alcool: ");
    scanf("%f", & Ra);

    printf("\nDigite o preco do litro da gasolina: ");
    scanf("%f", & G);
    printf("\nDigite o rendimento(km/L) do carro utilizando gasolina: ");
    scanf("%f", & Rg);
   
    if(Ra / A > Rg / G){
        printf("%c", 'A');
    }
    else{
        printf("%c", 'G');
    }

    return 0;
}