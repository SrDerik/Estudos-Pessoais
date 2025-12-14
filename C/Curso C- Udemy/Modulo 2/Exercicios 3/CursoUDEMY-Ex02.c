#include <stdio.h>

int main(){
  int n;
  int cont=0;
  int conta=1;
  
  printf("Digite um número:\n");
  scanf("%d", &n);

 for (int i = 1; i <= n; i++){ 
    cont=cont+i;
    printf("%d+",conta);
    conta=1+i; 
}

printf("\nA soma de 1 até %d é: %d\n", n, cont);
}