#include <stdio.h>
#include <string.h>

int main (){

  char nomeJogador [50];
  
  do{
      int erros = 0;
      
      printf("Digite seu nickname:");
      scanf("%49s", nomeJogador);
      int tamanho = strlen(nomeJogador);
      
  for (int i = 0; i <= tamanho ; i++){
    if (nomeJogador[i] == '$' 
       || nomeJogador[i] == '#'
       || nomeJogador[i] == '@' 
       || nomeJogador[i] == '%' 
       || nomeJogador[i] == '!'){
        erros++;
    }

}
 
   if (erros !=0){
    printf("\nNome inválido! %d caracteres especiais identificados\n", erros);
   }
   else{
    printf("\nNome aprovado!\n");
   }
  } while (nomeJogador);
  
  return 0;
}