#include <stdio.h>

int main(){
     int escolha;
     
     printf("1. Verificar se o aluno foi aprovado\n2. Sair\n");
     scanf("%d", &escolha);

     switch (escolha){
     case 1:
        int nota,frequencia;

        printf("Insira a Nota final (0-10)\n");
        scanf("%d", &nota);

        printf("Insira a frequência final (0-100)\n");
        scanf("%d", &frequencia);
       
         if (nota >= 7 && frequencia >=75){
            printf("Foi aprovado\n");
         }
         else{
            printf("Foi reprovado\n");
         }
         
        break;
     
     case 2:
         printf("Encerrando programa\n");
        break;

     default:
         printf("Opção inválida\n");
        break;
     }
}