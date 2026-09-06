#include <stdio.h>

int potencia(int num, int pot);

int main()
{
    int num, indice;
    
    printf("Digite o numero: ");
    scanf("%d", &num);
    printf("Digite o indice: ");
    scanf("%d", &indice);
    
    printf("%d elevado a %d: %d", num, indice, potencia(num, indice));

    return 0;
}

int potencia(int num, int pot){
    if(pot == 0){
        return 1;
    }
    else{
        return num * potencia(num, pot-1);
    }
}