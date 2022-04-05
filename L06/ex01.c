#include<stdio.h>

int main(){

    int n, maior;
    maior = 0;
    while(n >= 0){
        printf("\nDigite um valor inteiro: ");
        scanf("%d", & n);
        if(n > maior){
            maior = n;
        }
    }
    if(maior == 0){
        printf("O maior valor digitado foi: %d", n);
    }
    else{
        printf("O maior valor digitado foi: %d", maior);
    }
    return 0;
}