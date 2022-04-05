#include<stdio.h>

int main(){

    int i, n, fib, atual, ant;
    
    printf("Digite a quantidade de termos para a sequencia fibonacci: ");
    scanf("%d", & n);

    ant = 0;
    atual = 1;
    fib = atual + ant;
    printf("Sequencia de fibonacci ate o %d termo: %d, %d", n, ant, atual);

    for(i = 1; i <= n; i ++){
        printf(", %d", fib);
        ant = atual;
        atual = fib;
        fib = atual + ant;
    }

    return 0;
}