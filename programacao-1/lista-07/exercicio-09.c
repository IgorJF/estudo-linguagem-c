//Faça uma função em C chamada SINAL que receba como parâmetro um valor
//N inteiro e escreva a palavra POSITIVO se N for um número maior que zero, 
//NEGATIVO se N for menor que zero, ou ZERO se N for igual a zero.

#include <stdio.h>

void retornaNum(int N);

int main()
{
    int n;
    
    printf("Digite um numero: ");
    scanf("%d", &n);
    
    retornaNum(n);

    return 0;
}

void retornaNum(int N){
    
    if(N > 0){
        printf("POSITIVO");
    }
    else if(N < 0){
        printf("NEGATIVO");
    }
    else{
        printf("ZERO");
    }
}