#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    
    //Usa o tempo atual como semente
    srand(time(NULL));

    //Cria um número aleatório de 5 a 14
    int maximo = 6;
    int minimo = 1;

    int dado1 = (rand() % (maximo - minimo + 1) + minimo);
    int dado2 = (rand() % (maximo - minimo + 1) + minimo);
    int dado3 = (rand() % (maximo - minimo + 1) + minimo);
    
    int soma = dado1 + dado2 + dado3;
    printf("Dado 1: %d \n Dado 2: %d \n Dado 3: %d \n", dado1, dado2, dado3);
    printf("A soma dos valores dos dados eh: %d", soma);

    return 0;
}