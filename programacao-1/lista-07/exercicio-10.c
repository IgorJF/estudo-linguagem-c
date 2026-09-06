//Faça uma função em C que leia um número inteiro e, 
//usando a função SINAL (criado na questão anterior), 
//mostre se ele é maior, menor ou igual a zero.

#include <stdio.h>

void SINAL(int N);
//int leNum();
void leNum();

int main()
{
    //SINAL(leNum());
    leNum();

    return 0;
}

/*
int leNum(){
    
    int n;
    
    printf("Digite um numero: ");
    scanf("%d", &n);
    
    return n;
}
*/

void leNum(){
    int n;
    
    printf("Digite um numero: ");
    scanf("%d", &n);
    
    SINAL(n);
}

void SINAL(int N){
    
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