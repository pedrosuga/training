#include <stdio.h>
#include <stdlib.h>

int main(){
    int x, y, z;

    printf("Digite o 1 numero: ");
    scanf("%d", &x);
    printf("Digite o 2 numero: ");
    scanf("%d", &y);
    printf("Digite o 3 numero: ");
    scanf("%d", &z);

    if(x > 10 && y > 10 && z > 10){
        printf("Os tres numeros sao maiores que 10");
    }
    else{
        printf("Algum ou todos os numeros nao e maior que 10");
    }
    return 0;
}