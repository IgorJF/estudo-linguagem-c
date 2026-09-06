#include <stdio.h>

int main(){
    
    int A[5], B[5], i;

    for(i = 0; i < 5; i++){
        printf("Digite um numero do vetor A: ");
        scanf("%d", &A[i]);
        printf("Digite um numero do vetor B: ");
        scanf("%d", &B[i]);
    }

    for(i = 0; i < 5; i++){
        printf("%d\n", A[i]);
        printf("%d\n", B[i]);
    }

}