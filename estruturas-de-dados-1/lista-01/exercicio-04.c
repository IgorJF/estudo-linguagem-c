#include <stdio.h>

#define D 5

int main(){

	int M[D][D], i, j;

	for(i = 0;i < D;i++){
		for(j = 0;j < D;j++){
			printf("Digite o valor da posição [%d][%d]: ", i, j);
			scanf("%d", &M[i][j]);
		}
	}	

	for(i = 0;i < D;i++){
		for(j = 0;j < D;j++){
			if(M[i][j] % 2 != 0){
				printf("%d eh impar na posição [%d][%d].\n", M[i][j], i, j);
			}
		}
	}	

	return 0;
}