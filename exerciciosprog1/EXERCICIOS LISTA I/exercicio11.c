#include <stdio.h>

#define salarioMinimo 1412.00

int main() {

	float salarioFuncionario, qtdSalarios;

	printf("Digite o valor do salario do funcionario: ");
	scanf("%f", &salarioFuncionario);

	qtdSalarios = salarioFuncionario / salarioMinimo;

	printf("O funcionario que recebe R$ %.2f, tem salario equivalente a R$ %.2f salarios minimos.", salarioFuncionario, qtdSalarios);

	return 0;
}

