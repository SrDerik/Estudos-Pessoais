#include <stdio.h>

int main(){

   int n;
   int par=2;
   printf("Digite o número de linhas:\n");
   scanf("%d", &n);
   printf("\n");
   
   for (int i = n; i != 0; i--){
     printf("\n");
    for (int j = n; j != i ; j--){
        printf("%d ",par);
        par = par + 2;
   }
  }
     printf("\n");
     return 0;
}