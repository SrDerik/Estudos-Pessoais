#include <stdio.h>

int main(){

char modelo [15];
char funcionamento;
int numProdutos,anoFabricacao;

printf("Digite a quantidade de produtos a serem cadastrados:");
scanf("%d", &numProdutos);

for (int i = 0; i < numProdutos; i++){
     printf("Modelo:");
     scanf("%s", &modelo);

     printf("Ano de fabricação:");
     scanf("%d", &anoFabricacao);

     printf("Está funcionando normalmente? [s/n]:");
     scanf(" %c", &funcionamento);


     if (anoFabricacao < 2005 && funcionamento == 'n' ){
          printf("O carro '%s' precisa de REPAROS URGENTES!\n", modelo);
     }

     else if (anoFabricacao < 2005 && funcionamento == 's'){
        printf("O carro '%s' é antigo, recomenda-se uma revisão!\n", modelo);
     }

     else if (anoFabricacao >= 2005 && funcionamento == 'n'){
                printf("O carro '%s' precisa de manutenção!\n", modelo);
     
     }
     else {
         printf("O carro '%s' está em boas condições!\n", modelo);
     }
 }

 printf("\n");
 return 0;
}