#include <stdio.h>

int main (){
    int num1 = 0, num2 = 0, num3 = 0;
    int multiplicacao = 0;

    printf("Digite o primeiro número: ");
    scanf("%d", &num1);
    printf("Digite o segundo número: ");
    scanf("%d", &num2);
    printf("Digite o terceiro número: ");
    scanf("%d", &num3);

    multiplicacao = num1*num2*num3;

    printf("A multiplicao entre %d, %d, %d é %d", num1, num2, num3, multiplicacao);
    //printf("A multiplicao entre %d, %d, %d é %d", &num1, &num2, &num3, &multiplicacao); - Por que deu erro, o & é só para scanf -  o & comercial pega o endereço 
    //de memoria onde o programa está guardado

}