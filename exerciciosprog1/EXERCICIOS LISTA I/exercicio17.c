#include <stdio.h>

int main() {

	float angulo1, angulo2;

	printf("Digite o angulo 1 do triangulo: ");
	scanf("%f", &angulo1);
	
	printf("Digite o angulo 2 do triangulo: ");
	scanf("%f", &angulo2);

	printf("O angulo 1 do triangulo eh %.2f e o angulo 2 eh %.2f, resultando no terceiro angulo %.2f", angulo1, angulo2, 180 - (angulo1+angulo2));

	return 0;
}

