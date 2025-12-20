#include <stdio.h>

int main(){

    int 
    moedas=0, 
    rodadas=0, 
    solicitador;
     
    do{ 
     printf("Insira quantas moedas você coletou neste round\n");
     scanf("%d", &solicitador);
     moedas=moedas+solicitador;
     rodadas++;
    } while (moedas < 100);
    
    printf("Parabéns, você completou o desafio em %d\n", rodadas);
}