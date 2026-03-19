#include <stdio.h>

int main(){

    int num, i, resultado;

    printf("Digite um numero: ");
    scanf("%d", &num);

    for(i = num; i > 0; i--){
        if(i == num){
            resultado = num;
        }
        else{
            num = num - 1;
            resultado = resultado * num;
        }
    }

    printf("A fatorial %d", resultado);

    return 0;
}