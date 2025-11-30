/*
--------------------------------------
-AULA 1 E 2- TIPOS DE VAR E ESTRUTURA-
--------------------------------------
*/
#include <stdio.h>
int main() {
printf("Hello World!\n");

int numero = 10;
float numeroQuebrado = 5.903;
char letra = 'A';

//String, é feita com char, coloque um número a mais
char nome [6]= "Derik";

// %d=Int; %f=Float; %c=char; %s=String.
printf ("Numero: %d \n", numero);
printf ("Float: %f \n", numeroQuebrado);
printf ("Char: %c \n", letra);
printf ("Nome: %s \n", nome);

return 0;
}