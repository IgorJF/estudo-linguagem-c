#include <stdio.h>

int main(){

	int opc, n1, n2, n3;
	float resultado;

	printf("Digite o primeiro numero: ");
	scanf("%d", &n1);
	
	printf("Digite o segundo numero: ");
	scanf("%d", &n2);	

	printf("Digite o terceiro numero: ");
	scanf("%d", &n3);	

	printf("Digite a opcao desejada: \n1 - Media Geometrica\n2 - Media Ponderada\n3 - Media Harmonica\n4 - Media Aritmetica\n");
	scanf("%d", &opc);

	switch (opc){
		case 1:
			resultado = n1 * n2 * n3 * 1.0;
			printf("A media geometrica eh: %.2f\n", resultado);
			break;
		case 2:
			resultado = ((n1 + (n2 * 2) + (n3 * 3)) * 1.0) / 6;
			printf("A media ponderada eh: %.2f\n", resultado);
			break;
		case 3:
			resultado = 1.0 / ((1.0/n1) + (1.0/n2) + (1.0/n3));
			printf("A media harmonica eh: %.2f\n", resultado);
			break;
		case 4:
			resultado = ((n1 + n2 + n3)*1.0) / 3;
			printf("A media aritmetica eh: %.2f\n", resultado);
			break;
		default:
			printf("Essa opcao nao eh valida.\n");
			break;
	}

	return 0;
}