#include <stdio.h>

#define D1 6
#define D2 6

int main()
{
    int M6[D1][D2], i, j;
    
    for(i = 0;i < D1;i++){
        for(j = 0;j < D2;j++){
            scanf("%d", &M6[i][j]);    
        }
    }
    
    for(i = 0;i < D1;i++){
        for(j = 0;j < D2;j++){
            printf("%d ", M6[i][j]);
        }
        printf("\n");
    }
    

    return 0;
}