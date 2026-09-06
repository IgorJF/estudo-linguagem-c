#include <stdio.h>

float calculaMedia(float nota1, float nota2, float nota3, float nota4);

int main(){

	float n1, n2, n3, n4;
	int i;

	printf("Digite a nota 1:  ");
	scanf("%f", &n1);
	
	printf("Digite a nota 2:  ");
	scanf("%f", &n2);

	printf("Digite a nota 3:  ");
	scanf("%f", &n3);

	printf("Digite a nota 4:  ");
	scanf("%f", &n4);
	
	printf("A media eh %.2f\n", calculaMedia(n1, n2, n3, n4));

	return 0;
}

float calculaMedia(float a, float b, float c, float d){
	float media;

	media = (a + b + c + d) / 4;

	return media;
}