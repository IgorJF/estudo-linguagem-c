#include <stdio.h>

int main(){
	
	int A[20], B[20], i, j = 19, k;

	for(i = 0;i < 20;i++){
		printf("Digite o valor da posicao %d: ", i);
		scanf("%d", &A[i]);
	}

	for(i = 0;i < 20;i++){
		k = A[i];
		B[j] = k;
		j--;
	}
	
	for(i = 0;i < 20;i++){
		printf("O vetor A na posicao %d tem valor: %d\n", i, A[i]);
	}

	for(i = 0;i < 20;i++){
		printf("O vetor B na posicao %d tem valor: %d\n", i, B[i]);
	}

	return 0;
}
