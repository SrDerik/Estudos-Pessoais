#include <stdio.h>

int main(){

 float salarioUm;
 float salarioDois;

 printf("Digite o primeiro salário do jogador de futebol:");
 scanf("%f", &salarioUm);

 printf("Digite o primeiro salário do jogador de futebol:");
 scanf("%f", &salarioDois);

  float diferenca = salarioUm - salarioDois;

  printf("A difereça de um salário pro outro é %.3f", diferenca);
}