#include<stdio.h>

int main(){

    int base, altura, perimetro, area;

    printf("Digite, respectivamente, a base e a altura do retangulo separadas por virgula: ");
    scanf("%d, %d", & base, & altura);
    
    perimetro = base * 2 + altura * 2;
    area = base * altura;

    if(perimetro == area){
        printf("O perimetro e a area sao iguaus.\n");
    }
    else if(area > perimetro){
        printf("A area e maior que o perimetro.");
    }
    else{
        printf("O perimetro e maior que a area.");
    }
    
    return 0;
}