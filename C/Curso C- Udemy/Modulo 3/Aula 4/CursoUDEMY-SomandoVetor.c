#include <stdio.h>

int main(){
   int 
   pontos[5],
   soma = 0;

   for (int i = 0; i < 5; i++){
    printf("Digite quantos pontos foram feitos na rodada %d:", i + 1);
    scanf("%d", &pontos[i]);

    soma += pontos[i];

   }
   printf("Total de pontos:%d\n", soma);

   return 0;
}