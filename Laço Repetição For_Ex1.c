#include <stdio.h>
#include <stdlib.h>

int main(){
    int i;
    int soma = 0;

    for(int i = 0; i < 10; i++){

        //Print i and skip a line
        printf ("i = %d (Soma: %d) \n", i, soma);

        /* Increment the value of i in the sum
        Sum gets the current value of sum + i */
        soma = soma + i;
        
    }
    
    printf("O valor da soma eh: %d", soma);
    return 0;
}
