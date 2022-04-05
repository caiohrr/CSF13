#include<stdio.h>

int main(){

    int C, conta;
    conta = 0;

    printf("Insira a quantidade de agua em m3: ");
    scanf("%d", & C);

    if(C < 0 ){
        printf("Erro, apenas valores positivos. ");
    }
    else if(C >= 101){
        conta = 167;
        conta += (C - 100) * 5;
    }
    else if(C < 101 && C >= 31){
        conta = 27;
        conta += (C - 30) * 2;
    }
    else if(C < 31 && C >= 11){
        conta = 7;
        conta += (C - 10);
    }
    else if(C < 11){
        conta = 7;
    }
    
    printf("Valor da conta: R$ %d", conta);
    
    return 0;
}