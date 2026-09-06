#include <stdio.h>

int main(){
    float pesoCorporal = 0;
    float pesoGordo = 0, pesoMagro = 0;

    printf("Digite o peso: ");
    scanf("%f", &pesoCorporal);

    pesoGordo = 1.15*pesoCorporal;
    pesoMagro = 0.8*pesoCorporal;

    printf("Seu peso atual é: %.2f\n", pesoCorporal);
    printf("Caso você engorde 15 porcento, seu novo peso sera: %.2f\n", pesoGordo);
    printf("Caso você emagreça 20 porcento, seu novo peso sera: %.2f\n", pesoMagro);

}