#include <stdio.h>

int main(){

    float preco = 0;

    printf("Qual o preço do produto: ");
    scanf("%f", &preco);

    preco = 0.90*preco;

    printf("O novo preco do pruduto é %.2f", preco);

    return 0;
}