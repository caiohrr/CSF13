#include<stdio.h>

int main(){
    
    float nota1, nota2, nota3, media;

    printf("Digite tres notas para o aluno.\n");  
    printf("Primeira nota(peso 2):");
    scanf("%f", & nota1);
    
    printf("Segunda nota(peso 3):");
    scanf("%f", & nota2);

    printf("Terceira nota(peso 5):");
    scanf("%f", & nota3);

    media = (nota1 * 2 + nota2 * 3 + nota3 * 5) / 10;

    printf("%f", media);
    
    return 0;
}