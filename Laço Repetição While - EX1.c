#include <stdio.h>
#include <stdlib.h>

int main(){

    int x = 50;

    while(x == 0){
        printf("%d \n", &x);
        x -= 6;

    }

    return 0;
}