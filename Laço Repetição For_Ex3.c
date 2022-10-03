#include <stdio.h>
#include <stdlib.h>

int main(){
    int i, inicial, final, intervalo;

    printf("Digite o valor inicial: ");
    scanf("%d", &inicial);
    printf("Digite o valor final: ");
    scanf("%d", &final);
    printf("Digite o intervalo desejado: ");
    scanf("%d", &intervalo);

    for(int i = inicial; i =< final; i + intervalo){
        printf("%d\n", i);
    }

    return 0;
}