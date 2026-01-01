#include <stdio.h>

int main(){
 int momento[5];
 float media;
 
 for (int i = 0; i <= 5; i++){
     printf("Digite o FPS registrado no momento %d:", i+1);
     scanf("%d", &momento[i]);

     media += momento[i];
 }
 media = media/6;

 printf("\nMédia de FPS:%.2f\n", media);

 return 0;
}


