#include <stdio.h>
/*
A lib stdlib.h lhe permite fazer geradores de números, 
convertores de string para int e float, veja abaixo:

SRAND=Gerador aleatório com semente
RAND=Gerador aleatório
ATOI=Converte String para Int
ATOF=Converte String para Float
*/
#include <stdlib.h>

//Precisamos dessa lib para fazer um gerador pseudo aleatório
#include <time.h>

int main(){
    //Fazendo um gerador de números pseudo aleatório
        /*Gera um número aleatório por segundo, se voltar naquele 
        segundo, sera o mesmo número */
        srand(time(NULL));
        //De 0 a 99
        int dado = rand() % 100;
        printf("Dado:%d\n", dado);

    char texto[] = "123";

    //ATOI converte String em Int 
    int numeroRecebido = atoi(texto);
    printf("Convertendo:%d\n", numeroRecebido);

    return 0;
}
