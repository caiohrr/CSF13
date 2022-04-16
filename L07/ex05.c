#include<stdio.h>

int main(){

    int n, m, i, aux, verificar;
    verificar = 0;
    
    printf("Digite um valor inteiro positivo: ");
    scanf("%d", &n);

    printf("\n\nDigite um valor inteiro positivo: ");
    scanf("%d", &m);
    aux = m;

    for(i = 2; i <= n; i ++){
        if(m > aux){
            verificar = 1;
        }
        aux = m;
        printf("\nDigite um valor inteiro positivo: ");
        scanf("%d", &m);
    }

    if(verificar == 1){
        printf("\nNumeros fora de ordem crescente.");
    }
    else{
        printf("\nNumeros em ordem crescente.");
    }

    return 0;
}
