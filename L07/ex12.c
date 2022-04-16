#include<stdio.h>

int is_prime(int num){

    int i;

    if(num == 1 || num == 2){
        return 1;
    }
    else{
        for(i = 2; i < num; i ++){
            if(num % i == 0){
                return 0;
            }
            else{
                return 1;
            }
        }   
    }
}

int main(){

    int j, i, n1, n2, resto_n1, resto_n2, fator;
    fator = 1;

    printf("Digite dois numeros entre virgulas: ");
    scanf("%d, %d", &n1, &n2);

    for(i = 2, resto_n1 = n1, resto_n2 = n2; i < n1; i ++){
        if(is_prime(i) == 1){
            while(resto_n1 % i == 0 || resto_n2 % i == 0){
                if(resto_n1 % i == 0 && resto_n2 % i == 0){
                    fator = fator * i;
                    resto_n1 = resto_n1/i;
                    resto_n2 = resto_n2/i;
                }
                else if(resto_n1 % i == 0){
                    resto_n1 = resto_n1/i;
                    fator = fator * i;
                }
                else if(resto_n2 % i == 0){
                    resto_n2 = resto_n2/i;
                    fator = fator * i;
                }
            }
        }
    }
    printf("O mimnimo multiplicador comum entre %d e %d e %d", n1, n2, fator);
    

    return 0;
}