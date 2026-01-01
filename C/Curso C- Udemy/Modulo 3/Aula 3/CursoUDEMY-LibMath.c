#include <stdio.h>
/*
A lib math.h lhe permite fazer calculos ao quadrado, 
elevado e usar modulo (absolute), veja abaixo:

POW:Elevado
SQRT:Raiz quadrada
ABS:Absolute (modulo)
FABS:Absolute para Float (modulo)
*/
#include <math.h>

int main(){
int base=2, expoente=3;

//Elevado
printf("2 elevado a 3 é igual a: %.2f", pow(base,expoente));
//Raiz quadrada
printf("Raiz de 2 é igual a: %.2f", sqrt(base));
//Modulo (absolute)
printf("Modulo de 2 - 3 é igual a: %d", abs(base- expoente));
//Modulo de float (fabs)
printf("Modulo de 1.5 - 2.3 é igual a: %.3f", fabs(1.5 - 2.3));

    return 0;
}