#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    int apostados[5];
    int randomizador[5];

    srand (time(NULL));

    for (int i = 0; i < 5; i++){
     printf("Insira a posição %d de sua posta:", i+1);
     scanf("%d", &apostados[i]);
    }

    
    for (int i = 0; i < 5; i++){
       randomizador[i] = rand () % 61;
    }
    
    if (
        randomizador[0] != apostados[0] &&
        randomizador[1] != apostados[1] &&
        randomizador[2] != apostados[2] &&
        randomizador[3] != apostados[3] &&
        randomizador[4] != apostados[4] &&    
        randomizador[5] != apostados[5])
        {
        printf("Não foi desta vez...\n");
    }
    else{
        printf("VOCÊ É O GRANDE GANHADOR DA MEGA-SENA DE 2025!\n");
    }

    printf("Os números sorteados foram:\n");

    for (int i = 0; i < 5; i++){
        printf("%d \n", randomizador[i]);
    }
    
}