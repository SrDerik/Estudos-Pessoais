#include <stdio.h>
#include <string.h>

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
              if (strchr(nomes[i],caractere)){
                printf("%s contém o caractere\n", nomes[i]);
            }
       }
    }