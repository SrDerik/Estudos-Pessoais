#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

srand(time(NULL));

    float
    numero1 = rand() % 61,
    numero2 = rand() % 61,
    numero3 = rand() % 61,
    numero4 = rand() % 61,
    numero5 = rand() % 61,
    numero6 = rand() % 61;

    int escolha1,escolha2,escolha3,escolha4,escolha5,escolha6;

    printf("\n======SORTEIO DA LOTERIA DA VIRADA!======");
    printf("\n-Seria você o próximo milionário?\n");

    printf("\nDigite um número de 1 a 60:");
    scanf("%d", &escolha1);

    printf("Digite um número de 1 a 60:");
    scanf("%d", &escolha2);

    printf("Digite um número de 1 a 60:");
    scanf("%d", &escolha3);

    printf("Digite um número de 1 a 60:");
    scanf("%d", &escolha4);

    printf("Digite um número de 1 a 60:");
    scanf("%d", &escolha5);

    printf("Digite um número de 1 a 60:");
    scanf("%d", &escolha6);

    if (numero1 == escolha1 && 
        numero2 == escolha2 && 
        numero3 == escolha3 && 
        numero4 == escolha4 &&
        numero5 == escolha5 &&
        numero6 == escolha6) {

     printf("\nPARABÉNS,VOCÊ É O NOVO GANHADOR DA LOTERIA DA VIRADA!!!");
        }
        else{
 printf("\nNão foi desta vez...\n");
        }
    printf("Números sorteados:%.0f %.0f %.0f %.0f %.0f %.0f\n",numero1,numero3, numero4,numero5,numero6);

    printf("\n======FIM DO SORTEIO======\n");

    return 0;
}