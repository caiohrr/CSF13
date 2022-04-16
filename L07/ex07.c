#include<stdio.h>

int main(){

    int i, n, prod, check_tri;
    check_tri = 0;

    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++){
        prod = i * (i + 1) * (i + 2);
        if(prod == n){
            check_tri = 1;
            break;
        }
    }
    if(check_tri == 1){
        printf("\n%d e um numero triangular", n);
    }
    else{
        printf("\n%d nao e um numero triangular", n);
    }



    return 0;
}