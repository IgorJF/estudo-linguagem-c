#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define T 10

void ordenacaoInsercaoBinaria(int V[], int n, int *comparacoes, int *deslocamentos);
void imprimirVetor(int V[], int n);

int main()
{
    int vetor[] = {4, 27, 5, 21, 7, 9, 0, 1, 6, 4};
    int comparacoes = 0, deslocamentos = 0;
    
    imprimirVetor(vetor, T);
    printf("\n");
    
    clock_t start, end;
    start = clock();
    
    ordenacaoInsercaoBinaria(vetor, T, &comparacoes, &deslocamentos);
    
    end = clock();
    
    imprimirVetor(vetor, T);
    printf("\n");
    
    printf("Comparacoes:   %lld\n", comparacoes);
    printf("Deslocamentos: %lld\n", deslocamentos);
    printf("\n\n  %f seg.\n", ((double) (end - start)) / CLOCKS_PER_SEC);
    
    return 0;
}

void ordenacaoInsercaoBinaria(int V[], int n, int *comparacoes, int *deslocamentos){
    for (int i = 1; i < n; i++) {
        int auxiliar = V[i];
        int esq = 0;
        int dir = i;
        
        //busca binaria para procurar a posicao
        while (esq < dir) {
            (*comparacoes)++;  
            int meio = (esq + dir) / 2;
            
            if (V[meio] <= auxiliar) {
                esq = meio + 1;
            } else {
                dir = meio;
            }
        }
        
        //deslocar as posicoes para adicionar
        for (int j = i; j > esq; j--) {
            V[j] = V[j - 1];
            (*deslocamentos)++; 
        }
        
        V[esq] = auxiliar;
    }
}

void imprimirVetor(int V[], int n){
    for (int i = 0; i < n; i++) {
        printf("%d ", V[i]);
    }
    printf("\n");
}