#include <stdio.h>

int main(){

    int senha;

    do{
     printf(" Digite a sennha correta (123456)\n");
     scanf("%d", &senha);
     } 
     while (senha!=123456);
    printf("\n");

    return 0;
} 