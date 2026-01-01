#include <stdio.h>

int main(){

    int senha;

    /*
    While=faz tal ação até que uma condição seja atendida
    Do=Faça isso enquanto while não for atendido
     
    Executa 1 vez pelo menos
    */

    do{
     printf(" Digite a sennha correta (123456)\n");
     scanf("%d", &senha);
     } 
     while (senha!=123456);
    printf("\n");

    return 0;
} 