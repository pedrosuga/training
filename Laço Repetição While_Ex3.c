#include <stdio.h>
#include <stdlib.h>

int main(){

    int x = 0;
    int y = 0;

    while (!(x > 5 && x < 10) || (b > 5 && b < 10)){
        printf("\nDigite números entre 5 e 10. \n");

        printf("Digite um valor para x:");
        scanf("%d", x);

        printf("Digite um valor para y:");
        scanf("%d", y);

    }

    printf("O valor da soma eh: %d", x + y);
    return 0;
}
