#include <stdio.h>

int main() {
 int valor = 4;

  /*
  Switch case, muito parecido como fazemos no Java.
  Caso o valor seja tal, imprima isto, se estiver fora 
  (out of bounds), imprima uma mensagem de erro.
  */

  switch (valor) {
      case 1:
      printf("Valor 1\n");
      break;
   
      case 2:
      printf("Valor 2\n");
      break;
   
      case 3: 
      printf("Valor 3\n");
      break;

     default:
     printf("Valor invalido");
     break;
    }

    return 0;
}