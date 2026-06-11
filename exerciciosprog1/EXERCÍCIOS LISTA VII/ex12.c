//Faça uma função em C que leia um vetor A de 30 elementos float e, 
//usando o procedimento METADE (criado na questão anterior), divida todos 
//seus elementos pela metade.

#include <stdio.h>

#define D 5

float METADE(float n);
void leVetor(float A[], int dim);

int main(){
    
    int i;
    float A[D];
    
    leVetor(A, D);
    
    for(i = 0;i < D;i++){
        printf("Valor original: %.2f\n", A[i]);
    }
    
    printf("\n");
    
    for(i = 0;i < D;i++){
        printf("O valor da metade: %.2f\n", METADE(A[i]));
    }
    
    
    return 0;
}

void leVetor(float A[], int dim){
    int i;
    
    for(i = 0;i < dim;i++){
        printf("Digite o valor da posicao [%d]: ", i);
        scanf("%f", &A[i]);
    }
    
}

float METADE(float n){
    return n/2;
}