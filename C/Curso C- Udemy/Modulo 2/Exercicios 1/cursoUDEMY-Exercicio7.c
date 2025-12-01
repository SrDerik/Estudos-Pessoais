#include <stdio.h>

int main() {

    int idade;

    printf("Digite sua idade: \n");
    scanf("%d", &idade);

    if (idade <= 20) {
        printf("Você está apto para jogar o sub-20 \n");
    }
    
    else{
    printf("Você não pode ir para o sub-20 \n");
    }
}