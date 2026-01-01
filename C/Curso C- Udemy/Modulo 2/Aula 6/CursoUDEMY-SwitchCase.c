#include <stdio.h>

int main(){
 char operador;
 float a, b; 

 //Pedindo informações
 printf("Digite o operador (+, -, *, /)\n");
 scanf("%c", &operador);

 printf("Digite o primeiro valor:\n");
 scanf("%f", &a);

 printf("Digite o segundo valor:\n");
 scanf("%f", &b);

   /*
   Um pouco mais complexo do que o ultimo switch case,
   mas vamos lá, ele lê o operador e imprime o resultado
   baseado nele, o ".2" que está em todos os valores
   servem para formatar ele em 2 casas decimais,
   o operador é %c porque só tem 1 caractere
   */
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
  //Verifica se é divisivel (não pode ser 0)
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

 return 0;
}