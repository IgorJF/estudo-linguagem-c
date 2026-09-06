#include <stdio.h>

#define linhas 3
#define colunas 8

int main(){

    int M[linhas][colunas], i, j, maior, posicaoI, posicaoJ;

    maior = 0;

    for(i = 0;i < linhas;i++){
        for(j = 0;j < colunas;j++){
            printf("Digite um numero da posicao [%d][%d]: ", i, j);
            scanf("%d", &M[i][j]);

            if(M[i][j] > maior){
                maior = M[i][j];
                posicaoI = i;
                posicaoJ = j;
            }
        }
    }

    printf("O maior numero da matriz eh: %d, na posicao %d, %d", maior, posicaoI, posicaoJ);


    return 0;
}