#include <stdio.h>
#include <stdlib.h>

int main(){
    int i, mult;

    printf("Digite o numero desejado: ");
    scanf("%d", &mult);

    for(int i = 0; i =< 10; i++){
        result = i * x;
        printf ("%d x %d = %d", mult, i, mult * i);
    }
    
    return 0;
}