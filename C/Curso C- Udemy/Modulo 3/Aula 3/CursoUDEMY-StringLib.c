#include <stdio.h>
#include <string.h>

int main(){

    char texto[] = "Derik";
    char texto2[] = "Gustavo";

    printf("%s",strlen(texto));
    printf("%s",strlen(texto2));

    char numeroDoCartao [] = "12345";
    char numeroDoCartao2 [] = "?";
    
    strcpy(numeroDoCartao,numeroDoCartao2);
    printf("%s\n", numeroDoCartao2);
    
    
    if (strcmp(numeroDoCartao2,numeroDoCartao2) == 0){
        printf("Senha do cartão correta!");
    }

    else{
        printf("Senha do cartão incorreta!");
    }

    char nome [] = "Derik";
    char sobrenome [] = "Soares";
    strcat(nome,sobrenome);
    printf("%s\n", nome);

             
} 