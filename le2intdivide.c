#include <stdlib.h>
#include <stdio.h>

int main{
    int x;
    int y;

    printf("Digite o primeiro valor: ");
    scanf("%d", &x);
    printf("Digite o segundo valor: ");
    scanf("%d", &y);

    int resultado = x / y;
    
    printf("O resultado da divisao entre o primeiro e o segundo valor eh: %d", resultado);
    return 0;
}