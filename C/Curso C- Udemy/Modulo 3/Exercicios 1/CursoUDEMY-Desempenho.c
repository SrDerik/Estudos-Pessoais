#include <stdio.h>

char* desempenho (float n1,float n2, float n3){
 
 float media = (n1+n2+n3) / 3 ;

 if (media >=9){
    printf("Excelente\n");
 }
  else if (media >=7  && media < 9){
    printf("Bom\n");
 }
  else if (media >= 5 && media < 7){
    printf("Regular\n");
 }
 else{
    printf("Ruim\n");
 }  
}

int main(){

    float n1,n2,n3;

    printf("Digite a primeira nota:");
    scanf("%f",&n1);
 
    printf("Digite a segunda nota:");
    scanf("%f",&n2);

    printf("Digite a terceira nota:");
    scanf("%f", &n3);

     printf("\n");

    desempenho(n1,n2,n3);
}