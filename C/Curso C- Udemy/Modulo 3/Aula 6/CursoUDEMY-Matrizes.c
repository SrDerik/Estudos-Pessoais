#include <stdio.h>

int main(){

    int matrizDeclarada [3][2] = {
        {1,2},{3,4},{5,6}
    };

    int matriz [3][2];

for (int i = 0; i < 3; i++){
    for (int j = 0; j < 2; j++){
        printf("Digite o valor para ser armazenado na coluna %d:", i+1);
        scanf("%d", &matriz[i][j]);
    }
}

for (int i = 0; i < 3; i++){
    printf("{");
    for (int j = 0; j < 2; j++){
        printf(" %d ", matriz[i][j]);
    }
    printf("}\n");
}

    return 0;
}