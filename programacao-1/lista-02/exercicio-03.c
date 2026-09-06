#include <stdio.h>

int main() {

    float num1, num2;

    printf("Digite o primeiro numero: ");
    scanf("%f", &num1);
    printf("Digite o segundo numero: ");
    scanf("%f", &num2);

    if(num1 > num2){
        printf("O numero %.2f eh maior que o numero %.2f", num1, num2);

    }
    else if (num1 == num2){
        printf("Os numeros %.2f e %.2f sao iguais", num1, num2);

    }
    else{
        printf("O numero %.2f eh maior que o numero %.2f", num2, num1);
    }

    return 0;
}
