#include<stdio.h>

int main(){

    int i, n, fact;
    printf("Digite um valor inteiro positivo: ");
    scanf("%d", & n);
    fact = n;

   for(i = 1; i < n; i ++){
        fact = fact * (n - i);
   }

    printf("Fatorial de %d: %d\n", n, fact);
    return 0;
}