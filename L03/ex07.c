#include<stdio.h>

int main(){

    float x,y;

    printf("Selecione coordenadas de um ponto(x,y): ");
    scanf("%f, %f", & x, & y);

    if(x == 0 && y == 0){
        printf("Origem");
    }
    else if(x == 0){
        printf("Eixo y");
    }
    else if(y == 0){
        printf("Eixo x");
    }
    else if(x > 0 && y > 0){
        printf("Q1");
    }
    else if(x < 0 && y > 0){
        printf("Q2");
    }
    else if(x < 0 && y < 0){
        printf("Q3");
    }
    else{
        printf("Q4");
    }


    return 0;
}