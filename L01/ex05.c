#include<stdio.h>

int main(){

    printf("Convertendo %c para minusculo: %c\n", 'A', 'A' + 32);
    printf("Convertendo %c para minusculo: %c\n", 'B', 'B' + 32);
    printf("Convertendo %c para minusculo: %c\n", 'C', 'C' + 32);
    printf("Convertendo %c para minusculo: %c\n", 'D', 'D' + 32);

    int initial_value = 65;


    // fazendo agora em loop todo o alfabeto
    while(initial_value < 91)
    {
        printf("Convertendo %c para minusculo: %c\n", initial_value, initial_value + 32);
        initial_value = initial_value + 1;
    }
    
    return 0;


}