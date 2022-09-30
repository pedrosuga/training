#include <stdio.h>
#include <stdlib.h>

int main(){
    int x, y;

    printf("Digite o primeiro valor: ");
    scanf("%d", &x);
    printf("Digite o segundo valor: ");
    scanf("%d", &y);

    if(x > y){
        printf("O primeiro valor eh maior que o segundo");
    }
    else if (x < y){
        printf("O segundo valor eh maior que o primeiro")
    }
    else{
        printf("O primeiro e o segundo sao iguais");
    }
    return 0;
}
