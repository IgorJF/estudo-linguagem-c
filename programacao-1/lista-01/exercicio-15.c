#include <stdio.h>

#define pi 3.1415

int main() {

	float raio, comprimento, area, volume;

	printf("Digite o raio da esfera: ");
	scanf("%f", &raio);
	
	comprimento = 2 * pi * raio;
	area = pi * (raio*raio);
	volume = (4 * pi * (raio*raio*raio)) / 3;

	
	printf("A esfera de raio %.2f tem comprimento %.2f, area %.2f, e volume %.2f", raio, comprimento, area, volume);

	return 0;
}

