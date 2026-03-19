#include <stdio.h>

void numPrimo(int a);

int main()
{
    int num;
    
    printf("Digite um numero: ");
    scanf("%d", &num);
    
    numPrimo(num);

    return 0;
}

void numPrimo(int a){
    int i, cont;
    
    for(i = 2;i < a-1;i++){//vai contar de 2 ate o numero - 1 para identificar
    //algum numero que divida esse numero e de 0 de resto, pois se isso acontecer
    //o numero nao eh primo. E dessa forma pois um numero como 27 so vai ser divido
    //por numeros naturais de 1 a 27, entao nao preciso avaliar todos os numeros para
    //saber se um numero eh primo, apenas preciso avaliar toda a sequencia de inteiros
    //ate chegar ate ele
        if(a % i == 0){
            cont++;
        }
    }
    
    if(cont >= 1){
        printf("Nao eh primo");
    }
    else{
        printf("Eh primo");
    }
}