#include <stdio.h>

//Fazendo calculos em uma função
 int parImpar(numero){
 
    if (numero % 2 != 0){
        printf ("Este número é impar\n");
    }
    else {
        printf ("Seu número é par\n");
    }
 return 0;
 }


int main(){

    int numero;

    printf("Digite um número para verificar:\n");
    scanf("%d", &numero);

 parImpar(numero);

 return 0;
}