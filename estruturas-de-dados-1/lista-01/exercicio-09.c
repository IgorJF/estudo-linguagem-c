#include <stdio.h>

#define D 24

int main(){

	float temp[D], *p;
	int i;

	for(i = 0;i < D;i++){
		printf("Digite o valor da temperatura %d: ", i+1);
		scanf("%f", &temp[i]);
	}

	p = temp;

	for (i = 0; i < D; i++) {
        	float fahrenheit = (*(p + i) - 273.15) * 9 / 5 + 32; 
        	printf("Temperatura %d: %.2f°F\n", i + 1, fahrenheit);
    	}

	return 0;
}