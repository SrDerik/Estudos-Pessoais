#include <stdio.h>

int main(){

 int estadio;
 int torcedores;
 
 printf("Digite a capacidade do estadio: \n");
 scanf("%d", &estadio);

 printf("Digite quantos torcedores tem nele \n");
 scanf("%d", &torcedores);

 float estadio90 = estadio * 0.9;
 float estadio70 = estadio * 0.7;
 float estadio50 = estadio * 0.5;

 if (torcedores >= estadio90) {
    printf("Lotado! \n");
 }

 else if (torcedores >= estadio70 && torcedores < estadio90) {
    printf("Ótima presença de público! \n");
 }

 else if (torcedores >= estadio50 && torcedores < estadio70) {
    printf("Público razoável \n");
 }
 
 else{
    printf("Morumbis \n");
 }
 
 return 0;
}