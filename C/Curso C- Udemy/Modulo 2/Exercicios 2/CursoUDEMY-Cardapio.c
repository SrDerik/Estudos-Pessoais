#include <stdio.h>

int main(){
 int escolha;

 printf("Escolha um item de nosso cardápio \n 1.Hamburguer \n 2.Cachorro quente \n 3.Pizza \n 4.Sair");
 scanf("%d", &escolha);

 switch (escolha){
 case 1:
     printf("Um Hamburguer no capricho!");
 break;
 
 case 2:
     printf("Um Cachorro Quente no capricho!");
 break;

 case 3:
     printf("Um Pizza no capricho!");
 break;

 case 4:
     printf("Encerrando atendimento...");
 break;

 default:
    break;
 }
 return 0;
}