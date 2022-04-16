#include<stdio.h>

int main(){

    int n, i, j, div_count;

    for(i = i; i < 10000000; i ++){
        for(j = 1, div_count = 1; j <= 20; j ++){
            if(i % j == 0){
                div_count += 1;
            }
        }
        if(div_count >= 20){
            printf("%d:%d ", i, div_count);
            break;
        }
    }


    return 0;
}
