#include<stdio.h>

int main(){

    int dia_nascimento, mes_nascimento, ano_nascimento, dia_atual,
    mes_atual, ano_atual, idade, dia_semana_nascimento, h, q, m, K, J;

    printf("Digite entre virgulas, respectivamente, o dia, mes e ano atual: ");
    scanf("%d, %d, %d", & dia_atual, & mes_atual, & ano_atual);

    printf("Digite entre virgulas, respectivamente, o dia, mes e ano de nascimento: ");
    scanf("%d, %d, %d", & dia_nascimento, & mes_nascimento, & ano_nascimento);

    if(ano_nascimento == ano_atual){
        printf("Idade = menos de 1 ano");
    }
    else if(mes_atual > mes_nascimento){
        idade = ano_atual - ano_nascimento;
        printf("Idade = %d anos.", idade);
    }
    else if(mes_nascimento == mes_atual && dia_nascimento > dia_atual){
        idade = ano_atual - ano_nascimento - 1;
        printf("Idade = %d anos.", idade);
    }
    else if(mes_atual < mes_nascimento){
        idade = ano_atual - ano_nascimento - 1;
        printf("Idade = %d anos.", idade);
    }
    else{
        idade = ano_atual - ano_nascimento;
        printf("Idade = %d anos.", idade);
    }

    h = dia_semana_nascimento;
    q = dia_nascimento;
    K = ano_nascimento % 100;
    J = ano_nascimento / 100;
    m = mes_nascimento;
    
    if(mes_nascimento == 1){
        m = 13;
    }
    else if(mes_nascimento == 2){
        m = 14;
    }
    else{
        m = mes_nascimento;
    }

    h = (q + ((m+1)*26/10) + K + (K/4) + (J/4) + (5*J)) % 7;

    if(h == 0){
        printf("Dia da semana do nascimento: Sabado");
    }
    else if(h == 1){
        printf("Dia da semana do nascimento: Domingo");
    }
    else if(h == 2){
        printf("Dia da semana do nascimento: Segunda");
    }
    else if(h == 3){
        printf("Dia da semana do nascimento: Terca");
    }
    else if(h == 4){
        printf("Dia da semana do nascimento: Quarta");
    }
    else if(h == 5){
        printf("Dia da semana do nascimento: Quinta");
    }
    else if(h == 6){
        printf("Dia da semana do nascimento: Sexta");
    }


    return 0;
}