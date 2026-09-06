#include <stdio.h>

int main(){

	int n1, n2, n3;
	float d1, d2, d3;
	char s1, s2, s3;
	
	int *p1 = &n1, *p2 = &n2, *p3 = &n3;
    	float *q1 = &d1, *q2 = &d2, *q3 = &d3;
    	char *r1 = &s1, *r2 = &s2, *r3 = &s3;

	printf("Digite o valor do inteiro 1: ");
	scanf("%d", &n1);
	printf("Digite o valor do inteiro 2: ");
	scanf("%d", &n2);
	printf("Digite o valor do inteiro 3: ");
	scanf("%d", &n3);
	
	printf("Digite o valor do decimal 1: ");
	scanf("%f", &d1);
	printf("Digite o valor do decimal 2: ");
	scanf("%f", &d2);
	printf("Digite o valor do decimal 3: ");
	scanf("%f", &d3);	
	
	printf("Digite o valor da string 1: ");
	scanf(" %c", &s1);
	printf("Digite o valor da string 2: ");
	scanf(" %c", &s2);
	printf("Digite o valor da string 3: ");
	scanf(" %c", &s3);

	printf("\n===== VALORES DIGITADOS =====\n");
	printf("Inteiros: %d, %d, %d\n", n1, n2, n3);
    	printf("Decimais: %.2f, %.2f, %.2f\n", d1, d2, d3);
    	printf("Letras: %c, %c, %c\n", s1, s2, s3);

    	*p1 = 2014;
    	*p2 = 2014;
    	*p3 = 2014;

    	*q1 = 9.99;
    	*q2 = 9.99;
    	*q3 = 9.99;

    	*r1 = 'Y';
    	*r2 = 'Y';
    	*r3 = 'Y';

	printf("\n===== VALORES ATUALIZADOS =====\n");
	printf("Inteiros: %d, %d, %d\n", n1, n2, n3);
    	printf("Decimais: %.2f, %.2f, %.2f\n", d1, d2, d3);
    	printf("Letras: %c, %c, %c\n", s1, s2, s3);

	return 0;
}