#include <stdio.h>

int main() {

	int numero1, numero2, soma;

	printf("Digite o numero1: ");
	scanf("%d", &numero1);
	
	printf("Digite o numero2: ");
	scanf("%d", &numero2);
	
	soma = numero1 + numero2;
	
	if (soma % 2 == 0) {
	    printf("A soma do numero %d e %d resulta em %d, que eh par ", numero1, numero2, soma);
	}
	else {
	    printf("A soma do numero %d e %d resulta em %d, que eh impar ", numero1, numero2, soma);
	}

	return 0;
}

