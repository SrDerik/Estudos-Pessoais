#include <stdio.h>

void mensagem(){
 printf("\n========OPÇÕES========\n");
 printf("1 - *\n");
 printf("2 - #\n");
 printf("3 - $\n");
 printf("=====================\n");
}

int quadrado(int escolha, int n){

    switch (escolha){
    case 1:
        for (int i = 1; i <= n; i++){
            printf("\n");
            for (int j = 1; j <= n; j++){
                printf("*");
            }   
        }
         printf("\n");
    break;
    
    case 2:
          for (int i = 1; i <= n; i++){
            printf("\n");
            for (int j = 1; j <= n; j++){
                printf("#");
            }   
        }
         printf("\n");
    break;
        
    case 3:
          for (int i = 1; i <= n; i++){
            printf("\n");
            for (int j = 1; j <= n; j++){
                printf("$");
            }   
        }
         printf("\n");
    break;

    default:
     printf("Escolha inválida\n");
    break;
    }
}

int main(){

    int escolha, n;

    mensagem();

    printf("\nSua escolha:\n");
    scanf("%d", &escolha);

    printf("Escolha o tamanho do quadrado:");
    scanf("%d", &n);

    quadrado(escolha,n);

    return 0;
}