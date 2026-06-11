#include <stdio.h>

#define TAM 10

int estado = 1;

void definir_semente(int numero);
int gerar_numero();
int pesquisa_binaria(int V[], int K, int inicio, int fim);
void bubble_sort(int V[], int n);

int main(){
	
	int V[TAM], i, pos, chave, inicio = 0, semente;
	
	printf("Digite a semente: \n");
	scanf("%d", &semente);
	
	printf("Digite o valor chave: \n");
	scanf("%d", &chave);
	
	definir_semente(semente);
	
	printf("\n\n");
	
	for(i = 0; i < TAM; i++){
		V[i] = gerar_numero() % TAM; 
	}
	
	printf("\n\n");
	
	for(i = 0; i < TAM; i++){
		printf("%d, ", V[i]);
	}
	
	//ordenar vetor
	bubble_sort(V, TAM);
	
	printf("\n\n");
	
	for(i = 0; i < TAM; i++){
		printf("%d, ", V[i]);
	}
	
	printf("\n\n");
	
	pos = pesquisa_binaria(V, chave, inicio, TAM - 1);
	
	if(pos == -1){
		printf("Nao encontrado\n");
	}
	else{
		printf("A chave %d foi encontrada na posicao %d do vetor V\n", chave, pos);
		for(i = pos+1;i < TAM;i++){
			if(chave == V[i]){
				pos = i;
				printf("A chave %d foi encontrada na posicao %d do vetor V\n", chave, pos);
			}
		}
	}
	
	return 0;
	
}

void definir_semente(int numero){
	estado = numero;
}

int gerar_numero(){
	//printf("Estado antes: %d\n", estado);
	
	estado = estado * 1103515245 + 12345;
	
	//printf("Estado formula: %d\n", estado);
	
	if(estado < 0){ 
		estado = estado * -1;
		//printf("Estado apos correcao: %d\n", estado);
	}
	
	//printf("Estado final: %d\n\n", estado % 32768);
	
	return estado % 32768;
}

int pesquisa_binaria(int V[], int K, int inicio, int fim){
	int meio = (inicio + fim)/2;
	
	if(inicio > fim)
		return -1;
	else if(V[meio] == K)
		return meio;
	else if(V[meio] > K)
		return pesquisa_binaria(V, K, inicio, meio-1);
	else
		return pesquisa_binaria(V, K, meio+1, fim);
}
//vai rodar ate chegar no caso base que é V[meio] = K

void bubble_sort(int V[], int n){
	int i, j, temp;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (V[j] > V[j + 1]) {
                temp = V[j];
                V[j] = V[j + 1];
                V[j + 1] = temp;
            }
        }
    }	
}