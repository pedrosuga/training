#include <stdio.h>
#include <stdlib.h>

int main(){
    int x, y;

    printf("Digite dois numeros: ");
    scanf("%d %d", &x, &y);

    if(x > 10 || y > 10){
        printf("Algum dos numeros eh maior que 10");
    }
    else{
        printf("Nenhum valor eh maior que 10");
    }
    return 0;
}