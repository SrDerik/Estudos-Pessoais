#include <stdio.h>

int main() {
    int Valorum;
    int Valordois;

    printf("Digite um número:");
    scanf("%d", &Valorum);


    printf("Digite um número:");
    scanf("%d", &Valordois);

    printf("O resultado da adição é: %d + %d=%d \n", Valorum, Valordois, Valorum+Valordois);
    printf("O resultado da subtração é: %d - %d=%d \n", Valorum, Valordois, Valorum-Valordois);
    printf("O resultado da multiplicação é: %d * %d=%d \n", Valorum, Valordois, Valorum*Valordois);
    printf("O resultado da divisão é: %d / %d=%d \n", Valorum, Valordois, Valorum/Valordois);
    
    return 0;
}