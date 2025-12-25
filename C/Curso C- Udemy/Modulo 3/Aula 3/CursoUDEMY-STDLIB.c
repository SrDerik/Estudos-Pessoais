#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main(){
    srand(time(NULL));
    int dado = rand() % 100;
    printf("Dado:%d\n", dado);

    char texto[] = "123";

    int numeroRecebido = atoi(texto);
    printf("Convertendo:%d\n", numeroRecebido);

    return 0;
}
