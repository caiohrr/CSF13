#include<stdio.h>
#include<stdlib.h>

int main(){

    int a, b, c;

    printf("Digite 3 valores entre virgulas, para serem lados de um triangulo: ");
    scanf("%d, %d, %d", & a, & b, & c);

    if(abs(b - c) < a && a < (b + c)){
        if(a == b && b == c){
            printf("\nTriangulo equilatero");
        }
        else if(a != b && b != c && a != c){
            printf("\nTriangulo escaleno");
        }
        else{
            printf("\nTriangulo isoceles");
        }
    }    
    else{
        printf("\nNao pode ser triangulo");
    }

    return 0;
}