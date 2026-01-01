#include <stdio.h>

int main(){

    char xablau []= "xablau";

    printf("\n%c\n", xablau[0]);
    printf("\n%c\n", xablau[1]);
    printf("\n%c\n", xablau[2]);
    printf("\n%c\n", xablau[3]);
    printf("\n%c\n", xablau[4]);
    printf("\n%c\n", xablau[5]);

    char nomes[3][10]={
        "Derik","Rafael","Caua"
    };

    printf("\n%c\n", nomes[0][2]);

    guerras();

    return 0;
}

int guerras(){

  char guerras[3][20];

  for (int i = 0; i < 3; i++){
      printf("Digite o nome das top 3 guerras favoritas:");
      scanf("%s",guerras[i]);
  }
  
  for (int i = 0; i < 3; i++){
    printf("Guerra %d = %s \n", i+1,guerras[i]);
  }
  return 0;
}