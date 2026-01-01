
/*
---------------------------------------
---------- AULA 4- If e Else ----------
---------------------------------------
*/
#include <stdio.h>
int main(){

int idade;

printf("Digite sua idade: ");
scanf ( "%d", &idade);

//Se idade for menor do que 18, imprima isto
 if (idade<18) {
printf("Você é menor de idade \n")   ;
 }
//Se não, imprima isto
 else{
printf("Você é maior de idade");
 }

 return 0;
}