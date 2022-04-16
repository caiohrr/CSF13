#include<stdio.h>

int main(){

    int n, m, i, j, func;

    printf("Digite um valor positivo inteiro: ");
    scanf("%d", &m);

    for(i = -m; i <= m; i ++){
        printf("\n%2d ", i);
        func = (i * i) + i + 1;
        for(j = 0; j < func; j += 1){
            printf(".");
        }
        printf("*");
    }


    return 0;
}