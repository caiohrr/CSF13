#include<stdio.h>

int main(){

    int positivos, soma_positivos;
    float n, media;
    positivos = 0;
    soma_positivos = 0;

    while(n != -1000){
        printf("\nDigite valor inteiro: ");
        scanf("%f", & n);
        if(n > 0){
            positivos += 1;
            soma_positivos += n;
        }
    }

    media = soma_positivos / (float)positivos;

    printf("%d Valores positivos\n", positivos);
    printf("Media: %.1f", media);

    return 0;
}