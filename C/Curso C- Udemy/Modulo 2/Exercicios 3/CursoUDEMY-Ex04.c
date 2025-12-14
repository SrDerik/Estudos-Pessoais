#include <stdio.h>

int main(){

    int escolha;

    printf("Digite até qual número você que ver os pares:\n");
    scanf("%d", &escolha);

  for (int i = 0; i <= escolha; i++){
    if (i%2 ==0){
        printf ("%d  ", i);
    }
 printf("\n");
  }
}