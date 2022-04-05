#include<stdio.h>
#include<math.h>

int main(){

    int num, num_cent, num_dez, num_unid;
    printf("Digite um numero inteiro entre 100 e 999: ");
    scanf("%d", & num);

    num_cent = num / 100;
    num_dez = (num % 100) / 10;
    num_unid = num % 10;


    if(num < 100 || num > 999){
        printf("Erro: numero fora do intervalo solicitado");
    }
    else{
        if(pow(num_cent, 3) + pow(num_dez, 3) + pow(num_unid, 3) == num){
        printf("\n%d e um numero de Armstrong", num);
        }
        else{
        printf("\n%d nao e um numero de Armstrong", num);
        }
    }

    
    return 0;
}