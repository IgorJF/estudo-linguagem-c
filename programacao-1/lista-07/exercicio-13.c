//Faça uma função em C chamada MEDIA que retorne a média aritmética de três valores reais (X, Y e Z)
//passados como parâmetros.

#include <stdio.h>

float MEDIA(float x, float y, float z);

int main(){
    
    float num1, num2, num3;
    
    printf("Digite o numero 1: ");
    scanf("%f", &num1);
    printf("Digite o numero 2: ");
    scanf("%f", &num2);
    printf("Digite o numero 3: ");
    scanf("%f", &num3);
    
    printf("Media aritmetica entre %.2f, %.2f, %.2f: %.2f", num1, num2, num3, MEDIA(num1, num2, num3));
    
    return 0;
}

float MEDIA(float x, float y, float z){
    return (x+y+z)/3;
}