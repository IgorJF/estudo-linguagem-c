#include <stdio.h>

#define D1 6
#define D2 36

int main(){
    int i, j, k, M[D1][D1], V[D2], A;

    k = 0;

    printf("Digite o valor que ira multiplicar: ");
    scanf("%d", &A);

    for(i = 0;i < D1;i++){
        for(j = 0;j < D1;j++){
            printf("Digite o valor para a matriz M na posicao [%d][%d]: ", i, j);
            scanf("%d", &M[i][j]);
            
            V[k] = M[i][j] * A;

            //k incrementa um pois tem 36 execucoes, para o vetor ter 36 posicoes  
          
            k++;
        }
    }

    for(i = 0;i < D2;i++){
        printf("%d ", V[i]);
    }

}