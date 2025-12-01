
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


 if (idade<18) {
printf("Você é menor de idade \n")   ;
 }

 else{
printf("Você é maior de idade");
 }

 return 0;
}