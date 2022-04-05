#include<stdio.h>

int main(){

    int aux;
    printf("Digite um numero inteiro: ");
    scanf("%d", & aux);

    printf("%f", (float)aux);
    
    // Houve um erro de execucao, para corrigi-lo foi necessario especificar
    // um tipo float para a variavel aux

    return 0;
}
