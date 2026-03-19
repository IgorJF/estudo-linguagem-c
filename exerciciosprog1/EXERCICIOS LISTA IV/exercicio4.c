#include <stdio.h>

int main()
{
    int num[10], i, cont;
    
    cont = 0;
    
    for(i = 0; i < 10; i++){
        printf("Digite o %d numero: ", i+1);
        scanf("%d", &num[i]);
        
        if(num[i] % 2 == 0){
            cont++;
        }
    }
    
    for(i = 0; i < 10; i++){
        printf("%d\n", num[i]);
    }
    
    printf("%d valores pares", cont);
    

    return 0;
}