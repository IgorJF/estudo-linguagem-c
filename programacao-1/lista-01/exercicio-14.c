#include <stdio.h>

int main() {

	float salario, conta1, conta2, salarioRestante;

	printf("Digite o salario de Joao: ");
	scanf("%f", &salario);
	printf("Digite o valor da primeira conta: ");
	scanf("%f", &conta1);
	printf("Digite o valor da segunda conta: ");
	scanf("%f", &conta2);
	
	conta1 = 1.02*conta1;
	conta2 = 1.02*conta2;
	
	salarioRestante = salario - (conta1 + conta2);
	
	printf("O valor do salario de Joao eh R$ %.2f, os valores das contas sao R$ %.2f e R$ %.2f, sobrando R$ %.2f", salario, conta1, conta2, salarioRestante);

	return 0;
}

