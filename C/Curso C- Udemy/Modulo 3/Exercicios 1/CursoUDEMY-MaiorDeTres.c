#include <stdio.h>

float MaiorDeTres (float num1,float num2,float num3){

    if (num1 > num2 && num1 > num3){
        return num1;
    }
    else if (num2 > num1 && num2 > num3){
        return num2;
    }
    else if (num3 > num1 && num3 > num2){
        return num3;
        }
        else{
            printf("Temos números iguais!\n");
            return 0;
        }
}

int main(){
float num1, num2, num3;

printf("Digite o valor do primeiro número:");
scanf("%f", &num1);

printf("Digite o valor do segundo número:");
scanf("%f", &num2);

printf("Digite o valor do terceiro número:");
scanf("%f", &num3);
printf("\n");

float resultado = MaiorDeTres(num1,num2,num3);
printf("O número maior é o :%.4f\n",resultado);

    return 0;
}