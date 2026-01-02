#include <stdio.h>

int main(){
    
int score [5],scoreRecord; 
  
printf("Digite os 5 scores do jogador:\n");

for (int i = 0; i < 5; i++){
    printf("Score %d:", i+1);
    scanf("%d", &score[i]);
    scoreRecord=score[0];
    
    if (score[i] > scoreRecord){
     printf("Parábens! Score %d superou o record!\n", score[i]);
     scoreRecord=score[i];
    }
}

}