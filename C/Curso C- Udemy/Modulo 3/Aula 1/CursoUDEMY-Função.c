#include <stdio.h>
/*
Estrutura:

tipoDoRetorno (int, char, etc) nomeFunção(parametros){
     codigo
     return valor(tipodoretorno); (se houver retorno) 
}
*/

int somar(int numero1, int numero2){
return numero1+numero2;
}

int main(){
    
    int resultado = somar(3,2);
    
    printf("Resultado:%d\n", resultado);
    printf("Resultado:%d\n", somar(5,5));
    printf("Resultado:%d\n", somar(10,5));
    
    return 0;
}