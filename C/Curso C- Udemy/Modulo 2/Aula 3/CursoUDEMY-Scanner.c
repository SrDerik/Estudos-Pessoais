
/*
--------------------------------------
-AULA 3- ENTRADA E SAIDA DE DADOS-
--------------------------------------
*/
#include <stdio.h>
int main(){
float valorScanner;

//Serve para pedir ao usuário o valor de algo
printf ("Digite um numero para ser armazenado: ");
scanf ("%f", &valorScanner);

printf("O valor de número é: %.2f \n", valorScanner);
}