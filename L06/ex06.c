#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){

    int random, tentativa, n_tent;
    
    srand(time(NULL));
    n_tent = 0;
    random = rand()% 500 + 1;

    printf("%d", random);

    while(1){
        printf("\nTente acertar o numero magico: \n");
        scanf("%d", & tentativa);
        if(tentativa == random){
            n_tent += 1;
            break;
        }
        else if(tentativa < random){
            printf("\nO numero magico e maior");
        }
        else{
            printf("\nO numero magico e menor");
        }
        n_tent += 1;
    }
    if(n_tent <= 3){
        printf("\nVoce acertou com %d tentativas! \\o/", n_tent);
    }
    else if(n_tent <= 6){
        printf("\nVoce acertou com %d tentativas! :-D", n_tent);
    }
    else if(n_tent <= 10){
        printf("\nVoce acertou com %d tentativas! :-)", n_tent);
    }
    else{
        printf("\nVoce acertou com %d tentativas! :-\\", n_tent);
    }
    return 0;
}