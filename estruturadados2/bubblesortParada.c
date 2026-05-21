#include <stdio.h>
#include <time.h>
#include <stdbool.h>

#define TAM 10

void bubbleSortParada(int v[], int t, int *comp, int *desl);
void imprimirVetor(int v[], int n);

int main(){

	int V[TAM] = {9,4,21,8,5,9,0,1,6,19};
	int comparacoes = 0, deslocamentos = 0;
	
	imprimirVetor(V, TAM);
    printf("\n");
    
    clock_t start, end;
    start = clock();
    
    bubbleSortParada(V, TAM, &comparacoes, &deslocamentos);
    
    end = clock();
    
    imprimirVetor(V, TAM);
    printf("\n");
    
    printf("Comparacoes:   %d\n", comparacoes);
    printf("Deslocamentos: %d\n", deslocamentos);
    printf("\n\n  %f seg.\n", ((double) (end - start)) / CLOCKS_PER_SEC);


	return 0;
}

void bubbleSortParada(int v[], int t, int *comp, int *desl){
	int i = t-1;
	bool parada = true;
	
	while(parada){ //enquanto for verdadeiro
		int j = 1;
		parada = false;//para assumir que o vetor pode estar ordenado
		while(j < t){ //quando j atingir maior que t, parada sinaliza false e para o algoritmo
			(*comp)++;
			if(v[j-1] > v[j]){
				int aux = v[j-1];
				v[j-1] = v[j];
				v[j] = aux;
				(*desl)++;
				parada = true;//diz que existem elementos fora de ordem ainda
			}
			i = j; //guarda o ultimo valot percorrido por j
			j = j+1;
		}
		t = i;//reduz para a area ja analisada
	}
}

void imprimirVetor(int v[], int n){
    for (int i = 0; i < n; i++) {
        printf("%d ", v[i]);
    }
    printf("\n");
}