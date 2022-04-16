#include<stdio.h>

int main(){

    int i, n, soma, not_prime;
    n = 1;
    soma = 0;

    while(n > 0){
        printf("\nDigite um valor inteiro(caso queira parar digite um negativo): ");
        scanf("%d", &n);
        not_prime = 0;
        if(n == 1){
            soma += 1;
            continue;
        }
        for(i = 2; i < n; i ++){
            if(n % i == 0){
                not_prime = 1;
            }
        }
        if(not_prime == 0){
            soma += i;
        }
    }

    printf("Soma de todos os primos digitados: %d", soma);

    return 0;
}