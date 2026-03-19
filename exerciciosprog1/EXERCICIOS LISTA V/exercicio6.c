#include <stdio.h>

#define D1 3
#define D2 5

int main(){

    int M[D1][D2], i, j;

    for(i = 0;i < D1;i++){
        for(j = 0;j < D2;j++){
            printf("Digite um numero da posicao [%d][%d]: ", i, j);
            scanf("%d", &M[i][j]);
        }
    }

    for(i = 0;i < D1;i++){
        for(j = 0;j < D2;j++){
            if((i + j) % 2 == 0){
                printf("%d\n", M[i][j]);
            }
        }
    }


}