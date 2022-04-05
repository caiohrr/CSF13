#include<stdio.h>

int main(){

    int n, i;
    i = 1;

    printf("Esolha um numero: ");
    scanf("%d", & n);

    while(i < 11){
        printf("%d * %d = %d\n", n, i, n * i);
        i += 1;
    }

    return 0;
}