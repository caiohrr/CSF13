#include<stdio.h>

int main(){

    int i, n;
    float n1, n2, n3;

    printf("Escolha a quantidade de testes: ");
    scanf("%d", & n);

    for(i = 0; i < n; i ++){
        printf("\nDigite tres valores entre viruglas: ");
        scanf("%f, %f, %f", & n1, & n2, & n3);
        printf("\nA media poderada com pesos 2, 3 e 5: %.2f", (((n1*2) + (n2*3) + (n3*5)) / 10.0));
    }
    

    return 0;
}