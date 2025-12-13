#include <stdio.h>

int main(){
 char operador;
 float a, b; 

 printf("Digite o operador (+, -, *, /)\n");
 scanf("%c", &operador);

 printf("Digite o primeiro valor:\n");
 scanf("%f", &a);

 printf("Digite o segundo valor:\n");
 scanf("%f", &b);

 switch (operador){
 case '+':
   printf("%.2f %c %.2f = %.2f", a, operador, b,(a + b));
  break;
 
 case '-':
   printf("%.2f %c %.2f = %.2f", a, operador, b,(a - b));
  break;

 case '*':
   printf("%.2f %c %.2f = %.2f", a, operador, b,(a * b));
  break;

 case '/':
   if (b != 0){
     printf("%.2f %c %.2f = %.2f", a, operador, b,(a / b));
    }
   else{
     printf("Não é divisivel!");
    }
   break;

 default:
   printf("Digite um operador válido");
  break;
 }
}