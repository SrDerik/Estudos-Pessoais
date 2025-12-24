#include <stdio.h>

char* AlunoPassou (float nota){

    if (nota >= 6){
        return ("O aluno passou!\n");
    }
    else if (nota >= 4 && nota < 6){
        return ("O aluno está de recuperação\n");
    }

        else{
            return("O aluno foi reprovado!\n");
        }
}

int main(){
float nota;

printf("Digite a nota do aluno:");
scanf("%f", &nota);
printf("\n");

printf("%s\n",AlunoPassou(nota));

    return 0;
}