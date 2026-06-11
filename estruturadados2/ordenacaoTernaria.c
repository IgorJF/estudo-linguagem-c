#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define T 10

void ordenacaoInsercaoTernaria(int V[], int n, int *comparacoes, int *deslocamentos);
void imprimirVetor(int V[], int n);

int main() {
    int vetor[] = {4, 27, 5, 21, 7, 9, 0, 1, 6, 4};
    int comparacoes = 0, deslocamentos = 0;

    imprimirVetor(vetor, T);
    printf("\n");

    clock_t start, end;
    start = clock();

    ordenacaoInsercaoTernaria(vetor, T, &comparacoes, &deslocamentos);

    end = clock();

    imprimirVetor(vetor, T);
    printf("\n");

    printf("Comparacoes: %d\n", comparacoes);
    printf("Deslocamentos: %d\n", deslocamentos);

    printf("\n%f seg.\n", ((double)(end - start))/CLOCKS_PER_SEC);

    return 0;
}

void ordenacaoInsercaoTernaria(int V[], int n, int *comparacoes, int *deslocamentos){
    for (int i = 1; i < n; i++) {
        int auxiliar = V[i];
        int esq = 0;
        int dir = i - 1;

        while (esq <= dir) {
            int terco = (dir - esq)/3;
            int meio1 = esq + terco;
            int meio2 = dir - terco;
            
            (*comparacoes)++;
            if (auxiliar < V[meio1]) {
                dir = meio1 - 1;
            } 
            else {
                (*comparacoes)++;
                if (auxiliar > V[meio2]) {
                    esq = meio2 + 1;
                } 
                else {
                    esq = meio1 + 1;
                    dir = meio2 - 1;
                }
            }
        }

        for (int j = i; j > esq; j--) {
            V[j] = V[j - 1];
            (*deslocamentos)++;
        }
        V[esq] = auxiliar;
    }
}

void imprimirVetor(int V[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", V[i]);
    }
    printf("\n");
}