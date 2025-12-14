#include <stdio.h>

int main(){
     /*int numeroTabuada;
      
     printf("Digite o número a ser multiplicado\n");
     scanf("%d", &numeroTabuada);

     for (int i = 1; i <= 10; i++){
       printf("%d x %d = %d\n", numeroTabuada, i, numeroTabuada*i);
     }
     */
     for (int i = 0; i <= 10; i++){
         printf("\nTabuada do %d\n", i);
        for (int j = 0; j <= 10; j++){
       printf("%d x %d = %d\n", i, j, i*j);
        }
     }
     

}