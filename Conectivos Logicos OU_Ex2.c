#include <stdio.h>
#include <stdlib.h>

int main(){
    int x, y;

    printf("Digite dois numeros: ");
    scanf("%d %d", &x, &y);

    if((x % 2 = 0) || (y % 2 = 0)){
        printf("Algum dos numeros eh par");
    }
    else{
        printf("Nenhum dos numeros eh par");
    }
    return 0;
}