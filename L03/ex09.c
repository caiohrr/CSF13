#include<stdio.h>
#include<time.h>
#include<stdlib.h>

int main(){

    srand(time(NULL));

    int n1, n2, random_operation;
    float resultado;
    
    n1 = rand() % 100 + 1;
    n2 = rand() % 100 + 1;
    random_operation = rand() % 5;


    printf("%d, %d", n1, n2);

    if(random_operation == 0){
        printf("\nDigite o resultado da soma entre %d e %d: ", n1, n2);
        time_t begin = time(NULL);
        scanf("%f", & resultado);
        time_t end = time(NULL);
        if(resultado == n1 + n2){
            printf("\nResposta correta.");
        }
        else{
            printf("\nResposta errada.");
        }
        printf(" Tempo para a resposta: %d segundos.", (end - begin));

    }
    else if(random_operation == 1){
        printf("\nDigite o resultado da subtracao entre %d e %d: ", n1, n2);
        time_t begin = time(NULL);
        scanf("%f", & resultado);
        time_t end = time(NULL);
        if(resultado == n1 - n2){
            printf("\nResposta correta.");
        }
        else{
            printf("\nResposta errada.");
        }
        printf(" Tempo para a resposta: %d segundos.", (end - begin));

    }
    else if(random_operation == 2){
        printf("\nDigite o resultado da multiplicacao entre %d e %d: ", n1, n2);
        time_t begin = time(NULL);
        scanf("%f", & resultado);
        time_t end = time(NULL);
        if(resultado == n1 * n2){
            printf("\nResposta correta.");
        }
        else{
            printf("\nResposta errada.");
        }
        printf(" Tempo para a resposta: %d segundos.", (end - begin));

    }
    else if(random_operation == 3){
        printf("\nDigite o resultado do quociente da divisao(parte inteira da divisao) entre %d e %d: ", n1, n2);
        time_t begin = time(NULL);
        scanf("%f", & resultado);
        time_t end = time(NULL);
        if(resultado == n1 / n2){
            printf("\nResposta correta.");
        }
        else{
            printf("\nResposta errada.");
        }
        printf(" Tempo para a resposta: %d segundos.", (end - begin));

    }
    else if(random_operation == 4){
        printf("\nDigite o resto da divisao entre %d e %d: ", n1, n2);
        time_t begin = time(NULL);
        scanf("%f", & resultado);
        time_t end = time(NULL);
        if(resultado == n1 % n2){
            printf("\nResposta correta.");
        }
        else{
            printf("\nResposta errada.");
        }
        printf(" Tempo para a resposta: %d segundos.", (end - begin));

    }

    return 0;
    
}