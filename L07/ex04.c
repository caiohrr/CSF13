#include<stdio.h>

int main(){

    int n, i, j;
    printf("Digite um valor inteiro positivo: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++){
        printf("  %3d", i);
    }
    for(i = 1; i <= n; i++){
        printf("\n");
        printf("%d", i);
        for(j = 1; j <= i; j++){
            printf(" %3d ", i * j);
        }
    }

    return 0;
}