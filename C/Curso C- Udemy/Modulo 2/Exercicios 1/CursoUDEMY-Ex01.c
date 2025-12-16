#include <stdio.h>

int main() {
   char nome[6];
   int idade;
   int gols;

   printf("Digite seu nome \n");
   scanf("%s", &nome);

   printf("Digite sua idade \n");
   scanf("%d", &idade);

   printf("Quantos gols você fez \n");
   scanf("%d", &gols);

   printf("Olá %s, você tem %d e marcou %d gols \n" , nome, idade, gols );

return 0;
}