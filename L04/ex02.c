#include<stdio.h>
#include<math.h>

int main(){

    float media, n1, n2, n3;
    char tipo;

    printf("Esse programa fara a media de tres numeros.\nDigite A para media aritmetica.\nDigite P para media ponderada com pesos 1, 2 e 3 respectivamente.\nDigite G para media geometrica.\nDigite H para media harmonica.\n");
    scanf("%c", & tipo);

    if(tipo == 'A' || tipo == 'a'){
        printf("Agora escolha os 3 numeros, separados entre virgulas: ");
        scanf("%f, %f, %f", & n1, & n2, & n3);
        media = (n1 + n2 + n3) / 3.0;
        printf("\nMedia aritmetica: %.3f", media);
    }
    else if (tipo == 'P' || tipo =='p'){
        printf("Agora escolha os 3 numeros, separados entre virgulas: ");
        scanf("%f, %f, %f", & n1, & n2, & n3);
        media = (n1 + n2 * 2 + n3 * 3) / 6.0;
        printf("\nMedia ponderada: %.3f", media);
    }
    else if (tipo == 'G' || tipo =='g'){
        printf("Agora escolha os 3 numeros, separados entre virgulas: ");
        scanf("%f, %f, %f", & n1, & n2, & n3);
        media = cbrt(n1 * n2 * n3);
        printf("\nMedia geometrica: %.3f", media);
    }    
    else if (tipo == 'H' || tipo == 'h'){
        printf("Agora escolha os 3 numeros, separados entre virgulas: ");
        scanf("%f, %f, %f", & n1, & n2, & n3);
        media = 3.0 / (1.0/n1 + 1.0/n2 + 1.0/n3);
        printf("\nMedia ponderada: %.3f", media);
    }
    else{
        printf("Erro: opcao invalida.");        
    }
    return 0;
}