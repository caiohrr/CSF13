#include<stdio.h>

int main(){

    int i, n, soma;
    soma = 0;
    i = 0;

    printf("Digite um valor inteiro positivo: ");
    scanf("%d", & n);

    for(i = 1; i < n; i ++){
        if(n % i == 0){
            soma += i;
        }
    }
    
    if(soma == n){
        printf("%d e um numero perfeito!", n);
    }
    else{
        printf("Nao e um numero perfeito.");
    }
    printf("%d, %d", soma, n);

    return 0;
}