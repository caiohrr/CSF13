#include<stdio.h>

int main(){

    int A, B, C, H, L;

    printf("Digite a largura da caixa de 1 a 100(cm): ");
    scanf("%d", & A);

    printf("Digite o comprimento da caixa de 1 a 100(cm): ");
    scanf("%d", & B);

    printf("Digite a altura da caixa de 1 a 100(cm): ");
    scanf("%d", & C);

    printf("Digite a largura da janela de 1 a 100(cm): ");
    scanf("%d", & L);

    printf("Digite a altura da janela de 1 a 100(cm): ");
    scanf("%d", & H);

    
    if(A < 1 || A > 100 || B < 1 || B > 100 || C < 1 || C > 100 || H < 1 || H > 100 || L < 1 || L > 100){
        printf("Valor fora do esperado");
    }
    else if(A == B && B == C){
        if(A <= L && A <= H){
            printf("S");
        }
        else{
            printf("N");
        }
    }
    else if(A >= B && A >= C){
        if(B <= L && B <= H && C <= L && C <= H){
            printf("S");
        }
        else{
            printf("N");
        }
    }
    else if(B >= A && B >= C){
        if(A <= L && A <= H && C <= L && C <= H){
            printf("S");
        }
        else{
            printf("N");
        }
    }
    else if(C >= A && C >= B){
        if(A <= L && A <= H && B <= L && B <= H){
            printf("S");
        }
        else{
            printf("N");
        }
    }

    return 0;
}