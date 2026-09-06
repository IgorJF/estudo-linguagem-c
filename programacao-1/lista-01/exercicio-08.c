#include <stdio.h>

int main() {
    float baseMaior = 0, baseMenor = 0, altura = 0;
    float area = 0;

    printf("Digite a base maior: ");
    scanf("%f", &baseMaior);
    printf("Digite a base menor: ");
    scanf("%f", &baseMenor);
    printf("Digite a altura: ");
    scanf("%f", &altura);

    area = ((baseMaior + baseMenor) * altura) / 2;

    printf("A base maior do trapézio é %.2f, a base menor é %.2f e a altura é %.2f, resultando na area do trapezio o valor de %.2f.", baseMaior, baseMenor, altura, area);

    return 0;
}