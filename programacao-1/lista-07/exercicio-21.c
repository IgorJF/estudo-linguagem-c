#include <stdio.h>

void leInt();

int main()
{
    
    leInt();

    return 0;
}

void leInt(){
    
    int N;
    
    do{
        printf("Digite um numero: ");
        scanf("%d", &N);
    }while(N < 1 || N > 100);
    
    printf("Valor: %d\n", N);
}
