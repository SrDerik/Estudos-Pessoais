#include <stdio.h>

int main(){

   int n;
   
   printf("Digite o número de linhas:\n");
   scanf("%d", &n);
   printf("\n");
   
   for (int i = n; i != 1; i--){
    for (int j = i; j != 1 ; j--){
     printf("%d",j);
    }
      printf("%d\n",i);
   }
   printf("\n");
   return 0;
}
