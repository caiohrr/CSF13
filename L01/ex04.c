#include <stdio.h>

int main(){

    int initial_value = 65; 

    //Utilizei meus conhecimentos de python para realizar a tarefa utilizando um 
    //loop tambem

    printf("O Valor ASCII para o valor %d, is: %c \n", 65, 65);
    printf("O Valor ASCII para o valor %d, is: %c \n", 66, 66);
    printf("O Valor ASCII para o valor %d, is: %c \n", 67, 67);
    printf("O Valor ASCII para o valor %d, is: %c \n", 68, 68);


    printf("\nUsando um loop:\n");
    while (initial_value < 91)
    {
    printf("Codigo ASCII para o valor %d, is: %c \n", initial_value, initial_value);
    initial_value = initial_value +1;
    }
    

}