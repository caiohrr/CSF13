#include<stdio.h>

int main(){

    int n1, n2, mmc;
    mmc = 1;

    printf("Digite dois valores inteiros entre virgulas: ");
    scanf("%d, %d", & n1, & n2);

    while(1){
        if(mmc % n1 == 0 && mmc % n2 == 0){
            break;
        }
        mmc ++;
    }
    printf("%d", mmc);


    return 0;
}