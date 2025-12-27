#include <stdio.h>
#include <stdlib.h>

int main(){

    char idade [3];

    printf("Digite sua idade:");
    scanf("%s", &idade);

    if(atoi(idade) >=18 ){
        printf("Acesso liberado!\n");
    }
    else{
        printf("Acesso negado (menor de idade!)\n");
    }
}