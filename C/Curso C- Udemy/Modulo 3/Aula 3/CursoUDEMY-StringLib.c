#include <stdio.h>
/*
A lib string.h lhe permite manipular strings de forma
mais livre, podendo comparar, copiar, ver tamanho e concatenar  
veja abaixo:

STRCPY=Copia de uma String para a outra
STRLEN=Vê o tamanho de Strings
STRCAT=Junta duas Strings
STRCMP=Compara Strings
*/
#include <string.h>

int main(){

    //STRLEN
    char texto[] = "Derik";
    char texto2[] = "Gustavo";

    printf("%s",strlen(texto));
    printf("%s",strlen(texto2));

    //STRCPY
    char numeroDoCartao [] = "12345";
    char numeroDoCartao2 [] = "";
    
    strcpy(numeroDoCartao,numeroDoCartao2);
    printf("%s\n", numeroDoCartao2);
    
    //STRCMP
    if (strcmp(numeroDoCartao2,numeroDoCartao2) == 0){
        printf("Senha do cartão correta!");
    }

    else{
        printf("Senha do cartão incorreta!");
    }

    //STRCAT
    char nome [] = "Derik";
    char sobrenome [] = "Soares";
    strcat(nome,sobrenome);
    printf("%s\n", nome);
          
    return 0;
} 