#include <stdio.h>

int main(){

    int dano[4], maiordano = dano[0];
    
    printf("Digite o dano de 4 ataques:\n");

    for (int i = 0; i < 4; i++){
     printf("Ataque %d:", i+1);
     scanf("%d", &dano [i]);
    }

    for (int i = 0; i < 4; i++){
        for (int j = 0; j < 4; j++){
            if (dano[j] > dano[i]){
                maiordano = dano [j];
            }         
        }
    }
    printf("Maior dano causado:%d\n", maiordano);
    
    return 0;
}