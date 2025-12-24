#include <stdio.h>

int media(float num1, float num2){

    printf("Digite o primeiro número:\n");
    scanf("%f", &num1);
       
    printf("Digite o segundo número:\n");
    scanf("%f", &num2);

    float medias = (num1 + num2) / 2 ;  

    return medias;
}

int main(){

    float num1, num2;


    int resultado = media(num1, num2);
    printf("A média é:%.2f", resultado);

    return 0;
}

