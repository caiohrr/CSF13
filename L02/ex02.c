#include<stdio.h>

int main() {

    float n1 , n2 , aux;

    printf("Digite o primeiro valor: ");
    scanf("%f", & n1);

    printf("\nDigite o segundo valor: ");
    scanf("%f", & n2);

    printf("\nPrimeiro valor: %.2f", n1);
    printf("\nSegundo valor: %.2f", n2);

    aux = n1 + n2;

    printf("\n%.2f", aux );

    // Ao eliminar os comandos scanf os numeros exibidos sao todos 0 

    return 0;

}