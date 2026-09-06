#include <stdio.h>

#define D1 5

int main(){

    int V[D1][D1], i, j, cont, A;

    cont = 0;

    printf("Qual o valor do numero: ");
    scanf("%d", &A);

    for(i = 0;i < D1;i++){
        for(j = 0;j < D1;j++){
            printf("Qual o valor da posicao [%d][%d] na matriz V: ", i, j);
            scanf("%d", &V[i][j]);

            if(V[i][j] == A){
                cont++;
            }
        }
    }

    printf("Existem %d valores iguais a A(%d).", cont, A);

    return 0;
}