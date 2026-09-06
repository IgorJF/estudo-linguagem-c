#include <stdio.h>

int main(){
	
		
	float valor;
	int opc;

	printf("Digite o valor do produto: ");
	scanf("%f", &valor);

	printf("Digite o estado que será vendido: \n1 - Minas Gerais\n2 - Sao Paulo\n3 - Rios de Janeiro\n4 - Mato Grosso do Sul\n");
	scanf("%d", &opc);

	switch (opc){
		case 1:
			printf("O valor do produto terá imposto acrescido de 7%%\n");
			printf("O novo valor será: %.2f\n", valor*1.07);
			break;
		case 2:
			printf("O valor do produto terá imposto acrescido de 12%%\n");
			printf("O novo valor será: %.2f\n", valor*1.12);
			break;
		case 3:
			printf("O valor do produto terá imposto acrescido de 15%%\n");
			printf("O novo valor será: %.2f\n", valor*1.15);
			break;
		case 4:
			printf("O valor do produto terá imposto acrescido de 8%%\n");
			printf("O novo valor será: %.2f\n", valor*1.08);
			break;
		default:
			printf("Essa opcao nao representa nenhum estado.\n");
			break;
	}

	return 0;
}