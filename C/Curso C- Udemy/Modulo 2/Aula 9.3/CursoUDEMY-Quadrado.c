#include <stdio.h>

int main(){
   int escolha;

   printf("Selecione qual a dimensão do quadrado:\n");
   scanf("%d", &escolha);

  for (int i = 0; i < escolha; i++){
    printf("\n");
    for (int j = 0; j < escolha; j++){
   printf("* ");
    }
  }
  printf("\n");

}