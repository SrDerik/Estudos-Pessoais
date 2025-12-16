#include <stdio.h>

int main(){

   int n;

   printf("Digite o número de linhas:\n");
   scanf("%d", &n);
   printf("\n");


   for (int i = 1; i <= n; i++){
      for (int k = 0; k < n-i; k++){
        printf(" ");
}
    for (int j = 0; j < 2*i - 1; j++){
     printf("*");
    }
    
      printf("\n");
   }
      printf("\n");
   return 0;
}