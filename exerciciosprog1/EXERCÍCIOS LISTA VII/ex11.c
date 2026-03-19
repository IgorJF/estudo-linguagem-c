//Faça uma função em C chamada METADE que divida um valor do tipo float 
//(passado como parâmetro) pela metade.

#include <stdio.h>

float METADE(float n);

int main(){
    
    float num;
    
    printf("Digite um numero: ");
    scanf("%f", &num);
    
    printf("A meetade do numero %.2f eh %.2f", num, METADE(num));
    
    return 0;
}

float METADE(float n){
    return n/2;
}