#include <stdio.h>

int main(){
    int escolha;

    printf("Digite o número que você deseja:\n");
    scanf("%d", &escolha);

    for (int i = 0; i <= 10; i++){
        printf("%d x %d = %d\n", escolha, i, escolha*i);
    }
    return 0;
}