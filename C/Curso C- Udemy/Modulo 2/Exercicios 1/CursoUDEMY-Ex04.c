#include <stdio.h>

int main(){
 int vitoria;
 int empate;
 int derrota;

 printf("Digite a sua quantidade de vitórias:");
 scanf("%d", &vitoria);

 printf("Digite a sua quantidade de empates:");
 scanf("%d", &empate);

 printf("Digite a sua quantidade de derrotas:");
 scanf("%d", &derrota);

 int pontosVitoria = vitoria*3;
 int pontosEmpate = empate*1;
 int pontosDerrota = derrota*0;
 int total = pontosDerrota + pontosEmpate + pontosVitoria;
 printf("Você tem %d ao total! \n", total);
 
return 0;
}