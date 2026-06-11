#include <stdio.h>
#include <time.h>

#define TAM 10

void insercaoDireta(int v[], int t, int *comp, int *desl);
void imprimirVetor(int v[], int n);

int main(){

	int V[TAM] = {9,4,21,8,5,9,0,1,6,19};
	int comparacoes = 0, deslocamentos = 0;
	
	imprimirVetor(V, TAM);
    printf("\n");
    
    clock_t start, end;
    start = clock();
    
    insercaoDireta(V, TAM, &comparacoes, &deslocamentos);
    
    end = clock();
    
    imprimirVetor(V, TAM);
    printf("\n");
    
    printf("Comparacoes:   %d\n", comparacoes);
    printf("Deslocamentos: %d\n", deslocamentos);
    printf("\n\n  %f seg.\n", ((double) (end - start)) / CLOCKS_PER_SEC);


	return 0;
}

void insercaoDireta(int v[], int t, int *comp, int *desl){
	for(int i = 1;i <= t-1;i++){
		int aux = v[i];
		int j = i-1;
		
		while(j >= 0 && aux < v[j]){
			(*comp)++;
			v[j+1] = v[j];//troca a posicao posterior com a inicial
			(*desl)++;
			j = j-1; 
		}
		v[j+1] = aux; //tive que retirar o if do pseudocodigo, pois so entrava para atribuir o aux se j fosse -1 na primeira execucao
		(*desl)++;
	}
}

void imprimirVetor(int v[], int n){
    for (int i = 0; i < n; i++) {
        printf("%d ", v[i]);
    }
    printf("\n");
}