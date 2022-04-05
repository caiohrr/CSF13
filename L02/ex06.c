#include<stdio.h>

int main(){

    int n1, n2;
    float media;
    
    printf("Escolha dois numeros entre virgulas para saber a media entre eles:\n");
    scanf("%d, %d", & n1, &n2);
    
    media = (n1 + n2) / 2.0;
    // ao colocar um valor float como divisor a media foi calculada corretamente

    printf("\nA media entre %d e %d is: %f", n1, n2,media);


    return 0;
}