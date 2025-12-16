#include <stdio.h>

int main() {

    int gols;

    printf("Digite a quantidade de gols nessa temporada \n");
    scanf("%d", &gols);

    if (gols > 10) {
        printf("Excelente temporada! \n");
    }
    else if (gols >= 5) {
        printf("Boa temporada! \n");
    }
    else{
        printf("Temporada abaixo do esperado. \n");
    }

    return 0;
}