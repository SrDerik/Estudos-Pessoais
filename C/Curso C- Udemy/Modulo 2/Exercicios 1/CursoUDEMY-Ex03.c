#include <stdio.h>

int main(){

 int minutos;
 printf("Digite quantos minutos você jogou \n"); 
 scanf("%d", &minutos);

 int horas = minutos/60;
 int minutosRestantes = minutos % 60 ;

 printf("O resultado em horas foi: %d \n", horas);
 printf("O resultado em minutos foi: %d \n", minutosRestantes);

return 0;
}