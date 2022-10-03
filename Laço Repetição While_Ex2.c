#include <stdio.h>
#include <stdlib.h>

int main(){

    int x = 10;
    int y;

    printf("Digite um número desejado maior que 10: ");
    scanf("%d", &y);

    while(x <= y){
        if (x % 2 == 0){
            printf("%d \n", &x);
        }
        x += 1;
    }

    return 0;
}