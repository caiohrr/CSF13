#include<stdio.h>

int main(){

    int n, m, i, j;
    n = 9;
    m = 9;


    for(i = 1; i <= n; i++){
        printf("%2d ", i);
        for(j = 2; j <= m; j ++){
            printf("%2d ", i * j);
        }
        printf("\n");
    }


    return 0;
}