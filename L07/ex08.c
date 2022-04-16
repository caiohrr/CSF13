#include<stdio.h>
#include<math.h>

int main(){

    int n, check, aux, mod;
    mod = 0;
    check = 1;

    printf("Digite um valor inteiro positivo: ");
    scanf("%d", &n);

    aux = n % 10;

    while(n != 0){
        mod = n % 10;
        if(aux != mod){
            check = 0;
            break;
        }
        aux = mod;
        n = n / 10;
    }

    if(check == 1){
        printf("Todos os digitos do numero sao iguais");
    }
    else{
        printf("Os digitos sao diferentes");
    }

    return 0;
}