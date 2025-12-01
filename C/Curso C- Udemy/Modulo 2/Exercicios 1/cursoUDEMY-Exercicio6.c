#include <stdio.h>

int main(){

    int cartoes;
    
    printf("Quantos cartões amarelos você recebeu? \n");
    scanf("%d", &cartoes);

    if (cartoes <=1) {
     printf("Você ainda pode jogar! \n");
    }

    else{
    printf("Você foi expulso! \n");
    }
}