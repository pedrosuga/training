#include <stdio.h>
#include <stdlib.h>

int main(){
    int x, y, soma;

    printf("Digite dois numeros: ");
    scanf("%d %d", &x, &y);

    soma = x + y;

    if((x >= 0) && (x <= 10) || (soma % 2 == 0)){
        printf("Esta entre 0 e 10 ou foi par");
    }
    else{
        printf("Os numeros nao estao entre 0 e 10 nem eh par");
    }
    return 0;
}