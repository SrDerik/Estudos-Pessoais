#include <stdio.h>

int main() {

float gols;
float partidas;
 

printf("Digite o número de gols feitos em sua carreira\n");
scanf("%f", &gols);

printf("Digite quantas partidas você jogou \n");
scanf("%f", &partidas);

float calculo = gols/partidas;

printf("A média de gols feitos por partida é de: %f \n", calculo);

}