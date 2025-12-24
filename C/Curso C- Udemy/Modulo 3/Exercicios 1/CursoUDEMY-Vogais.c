#include <stdio.h>

int vogais(char palavra[100]){
    
    int cont=0;

    for (int i = 0; i < 100; i++){
    if (
    palavra[i]== 'A'|| palavra[i]== 'a'||
    palavra[i]== 'E'|| palavra[i]== 'e'||
    palavra[i]== 'I'|| palavra[i]== 'i'|| 
    palavra[i]== 'O'|| palavra[i]== 'o'||
    palavra[i]== 'U'|| palavra[i]== 'u' ){
        cont++;
    }
 }
 return cont;
     
}

int main(){
    char palavra [100];

    printf("Digite uma palavra:\n");
    scanf("%s\n", palavra);

    int total= vogais(palavra);
    printf("Está palavra tem:%d\n", total);

    return 0;
}