#include <stdio.h>

#define D 5

void retornaVal(int V[], int dim);

int main(){
    
    int V[D], i;
    
    for(i = 0;i < D;i++){
        printf("Digite o valor para a posicao %d: ", i);
        scanf("%d", &V[i]);
    }
    
    for(i = 0;i < D;i++){
        printf("%d: %d\n", i, V[i]);
    }
    
    retornaVal(V, D);
    
    
    return 0;
}

void retornaVal(int V[], int dim){
    int maior, menor, soma, i;
    
    soma = 0;
    maior = V[0];
    menor = V[0];
    
    for(i = 0;i < dim;i++){
        if(V[i] > maior){
            maior = V[i];
        }
        else if(V[i] < menor){
            menor = V[i];
        }
        
        soma = soma + V[i];
    }
    
    printf("Maior: %d\n", maior);
    printf("Menor: %d\n", menor);
    printf("Soma: %d\n", soma);
}