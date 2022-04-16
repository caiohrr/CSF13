#include<stdio.h>

int main(){

    int i, j, num_inicial, qtd_primos, not_prime;

    printf("Digite o numero inicial e quantos primos depois dele voce deseja ver(entre virgulas): ");
    scanf("%d, %d", &num_inicial, &qtd_primos);

    i = 1;
    while(i <= qtd_primos){
        not_prime = 0;
        num_inicial += 1;

        for(j = 2; j < num_inicial; j ++){
            if(num_inicial % j == 0){
                not_prime = 1;
                break;
            }
        }

        if(not_prime == 0){
            printf("%d ", num_inicial);
            i ++;
        }
   
    }

    return 0;
}