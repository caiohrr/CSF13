#include<stdio.h>

int main(){

    int num_alunos, num_monitores;

    printf("Qual o numero de alunos: ");
    scanf("%d", & num_alunos);
    
    printf("\nQual o numero de monitores: ");
    scanf("%d", & num_monitores);
    
    if(num_alunos + num_monitores <= 50){
        printf("E possivel levar todos os alunos e monitores em uma viagem.");
    }
    else{
        printf("Nao e possivel levar todos os alunos e monitores em uma viagem.");
    }

    return 0;
}