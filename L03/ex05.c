#include<stdio.h>
#include<math.h>

int main(){

    int a, b, c;
    float raiz_1, raiz_2, delta;

    printf("Digite, respectivamente, os coeficientes de uma equacao do 2 grau: ");
    scanf("%d, %d, %d", & a, & b, & c);

    delta = b*b - 4 * a * c;

    raiz_1 = (-b + sqrt(delta)) / (2.0 * a);
    raiz_2 = (-b - sqrt(delta)) / (2.0 * a);

    if(delta < 0){
        return 0;
    }
    else{
        printf("As raizes sao: %f, %f", raiz_1, raiz_2);
    }

    return 0;
}