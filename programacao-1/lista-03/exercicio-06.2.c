#include <stdio.h>

int main(){

    int resultado, num;
    resultado = 1;

    printf("Digite um numero: ");
    scanf("%d", &num);

    while(num > 0){
        resultado = resultado * num;
        num = num - 1;
    }

    printf("A fatorial eh %d", resultado);

    return 0;
}