#include <stdio.h>

int main(){

    int dezNumeros[10];

    for (int i = 0; i < 10; i++){
        printf("Digite o valor do %d número(s):", i+1);
        scanf("%d", &dezNumeros[i]);
    }

    printf("Os números pares são:");
    for (int i = 0; i < 10; i++){
        if (dezNumeros[i] % 2 == 0){
            printf("%d ",dezNumeros[i]);
        }
    }
        printf("\n");
        
        return 0;
  }   