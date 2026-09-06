#include <stdio.h>

int main(){

    int num, resultado;
    resultado = 1;

    printf("Digite um numero: ");
    scanf("%d", &num);

    do{
        resultado = resultado * num;
        num = num - 1;
    }while(num != 0);

    printf("A fatorial eh %d", resultado);

    return 0;
}