#include <stdio.h>

int main()
{
    float A[10], B[10];
    int i;
    
    // lendo os elementos do conjunto A
    for(i = 1; i < 11; i++){
        printf("Digite o numero de posicao %d: ", i);
        scanf("%f", &A[i]);
        
        if(i % 2 == 0){
            B[i] = A[i]/2.0;
        }
        else{
            B[i] = A[i]*3.0;
        }
    }
    
    // imprimindo os elementos dos conjuntos A e B
    for(i = 1; i < 11; i++){
        printf("A[%d]: %f\n", i, A[i]);
        printf("B[%d]: %f\n", i, B[i]);
    }
    

    return 0;
}