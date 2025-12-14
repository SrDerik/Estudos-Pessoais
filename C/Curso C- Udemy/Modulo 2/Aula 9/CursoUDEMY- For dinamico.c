#include <stdio.h>

int main(){
     int escolha;

     printf("Digite quantos números você quer ver?\n");
     scanf("%d", &escolha);

     for (int i = 0; i <= escolha; i++){
        printf("%d\n", i);
     }
     

}