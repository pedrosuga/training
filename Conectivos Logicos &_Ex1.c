#include <stdio.h>
#include <stdlib.h>

int main(){
    int x;

    printf("Digite o numero: ");
    scanf("%d", &x);

    if(x >= 0 && x <= 10){
        printf("O numero esta entre 0 e 10");
    }
    else{
        printf("O numero nao esta entre 0 e 10");
    }
    return 0;
}