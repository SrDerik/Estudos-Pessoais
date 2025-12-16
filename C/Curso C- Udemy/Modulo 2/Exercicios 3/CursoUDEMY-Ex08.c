#include <stdio.h>

int main(){

char nomeProduto [15];
int numProdutos,stock,stockMinimo;

printf("Digite a quantidade de produtos a serem cadastrados:");
scanf("%d", &numProdutos);

for (int i = 0; i < numProdutos; i++){
     printf("Nome do produto:");
     scanf("%s", &nomeProduto);

     printf("Quantidade em estoque:");
     scanf("%d", &stock);

     printf("Estoque mínimo recomendado:");
     scanf("%d", &stockMinimo);

     if (stockMinimo > stock){
          printf("O produto '%s' precisa ser reposto! (Estoque: %d, Mínimo: %d\n)", nomeProduto, stock, stockMinimo);
     }
     else{
         printf("O produto '%s' tem estoque suficiente. (Estoque: %d, Mínimo: %d\n)", nomeProduto, stock, stockMinimo);
     }
 }
 printf("\n");
 return 0;
}