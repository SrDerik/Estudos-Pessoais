#include <stdio.h>

int arrays(int Ecolunas, int Elinhas){
    
int colunas [100];

printf("Digite a quantidade de colunas:");
scanf("%d", &Ecolunas);

printf("Digite a quantidade de linhas:");
scanf("%d", &Elinhas);

for (int i = 0; i < Elinhas; i++){
    for (int j = 0; j < i; j++){   
    printf("Digite o valor:");
    scanf("%d", &colunas [j]);
  }  
 }
}

int main(){
    
int Ecolunas;
int Elinhas;

arrays(Ecolunas,Elinhas);

return 0;
}