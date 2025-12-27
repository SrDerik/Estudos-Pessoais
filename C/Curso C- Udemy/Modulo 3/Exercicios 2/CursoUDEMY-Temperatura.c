#include <stdio.h>
#include <stdlib.h>

int main(){

    char temperatura []= "25.7";

    if(atof(temperatura) < 18 ){
        printf("Frio\n");
    }
    else if (atof(temperatura) >= 18 && atof(temperatura) <= 26){
        printf("Agradável\n");
    }
    
    else{
        printf("Quente\n");
    }
}