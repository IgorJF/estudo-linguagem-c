#include <stdio.h>

#define N 3

int main() {
    
    int M[N][N], i, j, soma;
    
    soma = 0;

    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            printf("Informe os numeros da matriz A[%d][%d]: ", i, j);
            scanf("%d", &M[i][j]);
        }
    }

    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            printf("%d ", M[i][j]);
        }
        printf("\n");
    }

    for (i = 0; i < N; i++){
        for (j = 0; j < N; j++){
            if (i >= j){ // tudo que esta abaixo da diagonal tem o valor da linha[i] maior que da coluna[j]
                soma = soma + M[j][i];
            }
        }
    }
    printf("Soma dos elementos da diagonal principal para baixo: %d\n", soma);
    return 0;
}