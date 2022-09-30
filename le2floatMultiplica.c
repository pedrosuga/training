#include <stdlib.h>
#include <stdio.h>

int main{
    float x;
    float y;

    printf("Digite o primeiro valor com decimais: ");
    scanf("%f", &x);
    printf("Digite o segundo valor com decimais: ");
    scanf("%f", &y);

    int resultado = x * y;
    
    printf("O resultado da multiplicao entre os dois valores eh: %f", resultado);
    return 0;
}