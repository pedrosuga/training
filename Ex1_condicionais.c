#include <stdio.h>
#include <stdlib.h>

int main(){
    int x, y, soma;

    printf("Digite o primeiro valor: ");
    scanf("%d", &x);
    printf("Digite o segundo valor: ");
    scanf("%d", &y);

    soma = x + y;

    if(soma >= 10){
        printf("A soma eh maior ou igual a 10");
    }
    else{
        printf("A soma eh menor que 10");
    }
}