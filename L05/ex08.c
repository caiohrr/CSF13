#include<stdio.h>

int main(){

    int i, n12, n34;
    i = 1000;

    for(i = 1000; i <= 9999; i ++){
        n12 = i / 100;
        n34 = i % 100;
        
        if((n12 + n34)*(n12 + n34) == i){
            printf("%d, ", i);
        }
    }

    return 0;
}