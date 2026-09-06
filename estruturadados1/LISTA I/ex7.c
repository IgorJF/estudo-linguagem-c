#include <stdio.h>

float calculaIMC(float p, float a);

int main(){

	float peso, altura;

	printf("Digite o peso da pessoa: ");
	scanf("%f", &peso);

	printf("Digite o altura da pessoa: ");
	scanf("%f", &altura);

	printf("O IMC da pessoa eh %.2f.\n", calculaIMC(peso, altura));

	return 0;
}

float calculaIMC(float p, float a){
	float imc;

	imc = p/(a*a);

	return imc;
}