#include <stdio.h>
#include <stdlib.h>

int main(){

    int x, y, soma;

    printf("Digite o primeiro numero entre 5 e 10 ");
    scanf("%d", &x);

    printf("Digite o segundo numero entre 5 e 10 ");
    scanf("%d", &y);

    soma = x + y;

    while(soma >= 10 && soma <= 20){
        printf("O valor da soma eh: %d", soma);
    }

    return 0;
}