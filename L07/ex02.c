#include<stdio.h>

int main(){

    int i, j, m, current, potencia;
    printf("Digite um valor: ");
    scanf("%d", &m);
    current = 1;

    for(i = 1; i <= m; i ++){
        printf("\n%d^3 = ", i);
        potencia = i * i * i;
        printf("%d = ", potencia);
        for(j = 1; j <= i; j ++, current += 2){
            printf("%d", current);
            if(j != i){
                printf(" + ");
            }
        }
        
    }

    return 0;
}