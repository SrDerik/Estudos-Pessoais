#include <stdio.h>

int main(){
    
    char nomes [5] [21];
    char caractere = '\0';
 
    printf("Digite o caractere escolhido:");
    scanf(" %c", &caractere);

    for (int i = 0; i < 5; i++) {
        printf("Digite o %dº nome:", i+1);
        scanf("%s", nomes[i]);
    }
    
    for (int i = 0; i < 5; i++){
       for (int j = 0; j < 20; j++){
              if (nomes[i][j] == caractere){
                printf("%s contém o caractere\n", nomes[i]);
                break;
            }
       }
    }
}