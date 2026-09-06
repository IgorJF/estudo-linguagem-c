#include <stdio.h>
#include <time.h>

#define TAM 10

void bubbleSort(int v[], int t, int *comp, int *desl);
void imprimirVetor(int v[], int n);

int main(){

	int V[TAM] = {9,4,21,8,5,9,0,1,6,19};
	int comparacoes = 0, deslocamentos = 0;
	
	imprimirVetor(V, TAM);
    printf("\n");
    
    clock_t start, end;
    start = clock();
    
    bubbleSort(V, TAM, &comparacoes, &deslocamentos);
    
    end = clock();
    
    imprimirVetor(V, TAM);
    printf("\n");
    
    printf("Comparacoes:   %d\n", comparacoes);
    printf("Deslocamentos: %d\n", deslocamentos);
    printf("\n\n  %f seg.\n", ((double) (end - start)) / CLOCKS_PER_SEC);


	return 0;
}

void bubbleSort(int v[], int t, int *comp, int *desl){
	int i, j;
	
	for(i = t-1;i >= 1;i--){ //vai ate 1 pois a ultima comparacao ja tera acontecido
		int aux;
		for(j = 0;j < i;j++){
			(*comp)++;
			//parte das comparacoes e trocas
			if(v[j] > v[j+1]){
				aux = v[j];
				v[j] = v[j+1];
				v[j+1] = aux;
				(*desl)++;
			}
		}
	}
}

void imprimirVetor(int v[], int n){
    for (int i = 0; i < n; i++) {
        printf("%d ", v[i]);
    }
    printf("\n");
}