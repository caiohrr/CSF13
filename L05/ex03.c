#include<stdio.h>

int main(){

    int x, y;
    printf("Escolha dois numeros separados por virgula(primeiro o maior): ");
    scanf("%d, %d", & x, & y);
    printf("Todos os impares entre %d e %d:\n", x, y);
    while(x > y){
        if(y % 2 == 1){
            printf("%d\n", y);
        }
        y += 1;
    }
    
    return 0;
}