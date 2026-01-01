#include <stdio.h>

int main(){
     int escolha;

     //Pedindo informaçcões
     printf("Digite quantos números você quer ver?\n");
     scanf("%d", &escolha);

     //for que conta os números e 0 ao número que escolheu
     for (int i = 0; i <= escolha; i++){
        printf("%d\n", i);
     }
     
return 0;
}