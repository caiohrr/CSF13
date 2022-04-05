#include<stdio.h>

int main(){

    int n, i;
    i = 1;

    printf("Digite um valor inteiro: ");
    scanf("%d", & n);
    printf("Todos os valores que divididos por %d tem resto 2: ", n);

    for(i = 1; i < 101; i += 1){
        if( i % n == 2){
            printf("%d\n", i);
        }
    }


    return 0;
}