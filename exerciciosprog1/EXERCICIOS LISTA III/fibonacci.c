#include <stdio.h>

int main(){
	int inicioFib, num, x,y;

	printf("Digite um numero: ");
	scanf("%d", &num);

	inicioFib = 1;
	x = 0;
	y = 0;
	while(x < num){
		x = inicioFib + y;
		y = inicioFib;
		inicioFib = x;
	}
	if(x == num){
		printf("Pertence a sequencia de Fibonacci");
	}
	else{
		printf("Nao pertence");
	}


	return 0;
}