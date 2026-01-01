#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    int apostados[6],
    randomizador[6],
    cont=0;

    srand (time(NULL));

    printf("\n=== Apostando ===\n");
    for (int i = 0; i < 6; i++){
        printf("Insira a posição %d de sua posta:", i+1);
        scanf("%d", &apostados[i]);
    }
      
    printf("\n=== Numeros da Mega-Senna ===\n");
        for (int i = 0; i < 6; i++){
            randomizador[i] = rand () % 60 +1;
            printf("%d ", randomizador[i]);
        }
    
    printf("\n=== Resultado ===\n");
     for (int i = 0; i < 6; i++){
        for (int j = 0; j < 6; j++){
            if (apostados[j] == randomizador[i]){
                printf("%d ", apostados[j]);
                cont++;
            }
        }        
     }
     printf("\nTotal de acertos:%d\n", cont);     

      return 0;
}