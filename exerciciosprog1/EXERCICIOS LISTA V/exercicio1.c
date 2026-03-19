#include <stdio.h>

#define D1 3
#define D2 5

int main()
{
    int MAT1[D1][D2], MAT2[D1][D2], MSOMA[D1][D2], i, j;
    
    for(i = 0;i < D1;i++){
        for(j = 0;j < D2;j++){
            printf("Digite um numero da matriz 1: ");
            scanf("%d", &MAT1[i][j]);
        }
    }
    
    for(i = 0;i < D1;i++){
        for(j = 0;j < D2;j++){
            printf("Digite um numero da matriz 2: ");
            scanf("%d", &MAT2[i][j]);
        }
    }
    
    for(i = 0;i < D1;i++){
        for(j = 0;j < D2;j++){
            MSOMA[i][j] = MAT1[i][j] + MAT2[i][j];
        }
    }
    
    for(i = 0;i < D1;i++){
        for(j = 0;j < D2;j++){
            printf("%d ", MSOMA[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}