#include <stdio.h>

#define D1 5
#define D2 4

int main() {
    
   int A[D1][D2], i, j, T[D2][D1];
   
   for(i = 0; i < D1; i++){
       for(j = 0; j < D2; j++){
           printf("Digite o elemente da matriz A[%d][%d]: ", i, j);
           scanf("%d", &A[i][j]);
       }
   }
   
   for(i = 0; i < D1; i++){
       for(j = 0; j < D2; j++){
           printf("%d ", A[i][j]);
       }
       printf("\n");
   }
   
    for(i = 0; i < D2; i++){
       for(j = 0; j < D1; j++){
           T[i][j] = A[j][i];
       }
   }
   
    for(i = 0; i < D2; i++){
       for(j = 0; j < D1; j++){
           printf("%d ", T[i][j]);
       }
       printf("\n");
   }
    
    
    return 0;
}