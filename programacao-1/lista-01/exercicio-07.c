#include <stdio.h>

int main(){
    float pesoKg = 0;
    int pesoGramas = 0;

    printf("Qual o peso em KG? ");
    scanf("%f", &pesoKg);
    
    pesoGramas = pesoKg*1000;

    printf("Seu peso é %.2f que convertido para gramas resulta em %d", pesoKg, pesoGramas);
}