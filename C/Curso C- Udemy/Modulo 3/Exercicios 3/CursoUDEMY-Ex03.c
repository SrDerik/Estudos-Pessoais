#include <stdio.h>

int main(){

    int dezNumeros[10], pares[10],cont=0;

    for (int i = 0; i < 10; i++){
        printf("Digite o valor do %d número(s):", i+1);
        scanf("%d", &dezNumeros[i]);
        
        if (dezNumeros[i] % 2 == 0){
            pares[cont] = dezNumeros[i];
            cont++;
        }
    }

    printf("Os números pares são:");
    for (int i = 0; i < cont; i++){
        printf("%d ", pares[i]);
    }
        printf("\n");
        
        return 0;
  }   