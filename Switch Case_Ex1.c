#include <stdio.h>
#include <stdlib.h>

int main(){
    int x, y, operacao, soma, subtracao, multiplicacao, divisao;

    printf("Digite dois numeros: ");
    scanf("%d %d", &x, &y);

    printf("Selecione uma das operacoes");
    printf("Calculadora: \n 1 - Soma \n 2 - Subtracao \n 3 - Mutiplicacao \n 4 - Divisao");
    scanf("%d", &operacao);

    switch(operacao){
        case 1:
        soma = x + y;
        printf("O valor da soma eh: %d", soma);
        break;

        case 2:
        subtracao = x - y;
        printf("O valor da subtracao eh: %d", subtracao);
        break;

        case 3:
        multiplicacao = x * y;
        printf("O valor da multiplicacao eh: %d", multiplicacao);
        break;

        case 4:
        divisao = x / y;
        printf("O valor da divisao eh: %d", divisao);
        break;

        default:
        printf("Opcao invalida");
        break;
    }
    return 0;
}