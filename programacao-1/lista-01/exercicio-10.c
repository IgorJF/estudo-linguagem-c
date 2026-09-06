#include <stdio.h>

int main() {
    
    float diagonalMaior, diagonalMenor, areaLosango;
    
    printf("Digite o valor da Diagonal Maior: ");
    scanf("%f", &diagonalMaior);
    
    printf("Digite o valor da Diagonal Menor: ");
    scanf("%f", &diagonalMenor);
    
    areaLosango = (diagonalMaior * diagonalMenor) / 2;
    
    printf("A area do Losango de diagonal maior %.2f e diagonal menor %.2f eh: %.2f ", diagonalMaior, diagonalMenor, areaLosango);
    
    return 0;
}