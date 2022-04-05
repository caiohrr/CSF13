#include<stdio.h>

int main(){

    int alt_c, alt_z, anos;
    alt_c = 150;
    alt_z = 110;

    while(alt_c > alt_z){
        anos += 1;
        alt_c += 2;
        alt_z += 3;
    }

    printf("%d anos para ze ser mais alto que chico.", anos);

    return 0;
}