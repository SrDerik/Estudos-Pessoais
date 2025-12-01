#include <stdio.h>

int main(){

    int idade;
    int gols;

    printf("Digite sua idade \n");
    scanf("%d", &idade);

    printf("Digite quantos gols você fez \n");
    scanf("%d", &gols);

    if (idade <= 20 && gols > 10) {
       printf("Jovem talento promissor! \n");
    }

    else if (idade <= 20 && gols <= 10) {
     printf("Jovem em desenvolvimento. \n");
    }

    else if (idade >= 20 && gols > 15) {
        printf("Jogador experiente em grande fase! \n");
    }
    
    else{
       printf("Estevão \n");
    }
    
}