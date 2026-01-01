#include <stdio.h>

int main(){
   int escolha;

   //Pedindo o tamanho do quadrado
   printf("Selecione qual a dimensão do quadrado:\n");
   scanf("%d", &escolha);

  //for que imprime as colunas (da espaço/quebra para a proxima linha)
  for (int i = 0; i < escolha; i++){
      printf("\n");
  //for que imprime o *
      for (int j = 0; j < escolha; j++){
        printf("* ");
    }
  }
  
  printf("\n");

  return 0;
}