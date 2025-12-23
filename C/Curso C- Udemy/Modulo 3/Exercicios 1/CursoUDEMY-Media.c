#include <stdio.h>

int media(num1,num2){

    float medias = (num1 + num2) / 2 ;  
    printf("A média é:%.2f", medias);

    return 0;
}

int main(){

    float num1,
    num2;

    printf("Digite o primeiro número:\n");
    scanf("%.2f", &num1);
       
    printf("Digite o segundo número:\n");
    scanf("%.2f", &num2);

    media();
}