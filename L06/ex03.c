#include<stdio.h>

int main(){

    int tentativa;
    tentativa = 0;

    while(tentativa != 2002){
        printf("\nDigite a senha: ");
        scanf("%d", & tentativa);
        if(tentativa == 2002){
            break;
        }
        printf("\nSenha invalida.");
    }

    printf("\nAcesso Permitido");

    return 0;
}