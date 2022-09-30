#include <stdio.h>
#include <stdlib.h>

int main(){
    char x;
    char y;

    scanf("%c", &x);
    fflush(stdin;) // clear the buffer
    scanf("%c", &y);

    printf("Exibicao das duas letras: %c %c", x,y);
    return 0;
}