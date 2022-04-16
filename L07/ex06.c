#include<stdio.h>

int main(){

    int n, m, i, aux, ver_cr, ver_decr;
    ver_cr = 0;
    ver_decr = 0;
    
    printf("Digite um valor inteiro positivo(exceto o 1): ");
    scanf("%d", &n);

    printf("\n\nDigite um valor inteiro positivo: ");
    scanf("%d", &m);
    aux = m;

    for(i = 2; i <= n; i ++){
        if(m > aux){
            ver_cr += 1;
        }
        if(m < aux){
            ver_decr += 1;
        }
        aux = m;
        printf("\nDigite um valor inteiro positivo: ");
        scanf("%d", &m);
    }

    printf("%d %d", ver_cr, ver_decr);

    if(ver_cr == n - 2){
        printf("\nNumeros em ordem crescente.");
    }
    else if(ver_decr == n - 2){
        printf("\nNumeros em ordem decrescente.");
    }
    else{
        printf("\nNumeros desordenados.");
    }

    return 0;
}
