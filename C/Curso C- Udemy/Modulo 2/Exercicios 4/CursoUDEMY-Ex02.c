#include <stdio.h>

int main(){

    int solicitador;
     
    do{ 
     printf("Insira seu palpite (de 1 a 10)\n");
     scanf("%d", &solicitador);

    } while (solicitador != 7);
    
    printf("Parabéns, você completou o desafio\n");

    return 0;
}