#include <stdio.h>

int main()
{
    int num[10], i, numMaior, posicao;
    
    numMaior = 0;
    posicao = 0;
    
    printf("Digite o numero: ");
    scanf("%d", &num[0]);
    
    numMaior = num[0];
    
    for(i = 1; i < 10; i++){
        printf("Digite o numero: ");
        scanf("%d", &num[i]);
        
        if(num[i] > numMaior){
            numMaior = num[i];
            posicao = i;
        }
    }
    
    printf("O maior valor eh %d na posicao %d", numMaior, posicao);
    

    return 0;
}