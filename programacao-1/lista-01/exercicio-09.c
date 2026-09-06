#include <stdio.h>

int main()
{
    float ladoQuadrado, areaQuadrado;
    
    printf("Digite o valor do lado do quadrado: ");
    scanf("%f", &ladoQuadrado);
    
    areaQuadrado = ladoQuadrado * ladoQuadrado;
    
    printf("A area do quadrado de lado %.2f eh: %.2f", ladoQuadrado, areaQuadrado);
    

    return 0;
}