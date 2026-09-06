#include <stdio.h>

int main(){
    float num1 = 0, num2 = 0;
    float media = 0;

    printf("Digite a primeira nota: ");
    scanf("%f", &num1);
    num1 = num1*2;

    printf("Digite a segunda nota: ");
    scanf("%f", &num2);
    num2 = num2*3;

    media = (num1+num2) / 5;

    printf("A média das notas %.2f e %.2f é %.2f", num1, num2, media);
}

