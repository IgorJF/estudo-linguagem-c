#include <stdio.h>

#define wPorm 18

int main() {

	float largura, comprimento, area;

	printf("Digite a largura do comodo: ");
	scanf("%f", &largura);
	
	printf("Digite a comprimento do comodo: ");
	scanf("%f", &comprimento);
	
    area = largura * comprimento;

	printf("A largura do comodo em metros eh %.2f, o comprimento em metros %.2f, a area eh %.2f metros quadrados que necessita de %.2f para iluminar", largura, comprimento, area, area * wPorm);

	return 0;
}

