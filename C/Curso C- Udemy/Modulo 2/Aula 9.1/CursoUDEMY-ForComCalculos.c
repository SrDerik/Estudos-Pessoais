#include <stdio.h>

int main(){
     int numeroTabuada;

     //Pedindo o numero
     printf("Digite o número a ser multiplicado\n");
     scanf("%d", &numeroTabuada);

     //for que mostra apenas a tabuada do numero escolhido
     for (int i = 1; i <= 10; i++){
       printf("%d x %d = %d\n", numeroTabuada, i, numeroTabuada*i);
     }
    
     //Este de baixo mostra todas as tabuadas até o número escolhido
     
     //Este for apenas serve para mostrar em qual tabuada estamos
     for (int i = 0; i <= numeroTabuada; i++){
        printf("\nTabuada do %d\n", i);
        
        //for que faz os calculos
        for (int j = 1; j <= 10; j++){
          printf("%d x %d = %d\n", numeroTabuada, j, numeroTabuada*j);
        }
     }
     
return 0;
}