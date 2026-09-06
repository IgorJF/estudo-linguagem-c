#include <stdio.h>

int main()
{
    int num[10], ordem[10], j, i, k;
    
    k = 0;
    
    for(i = 0; i < 10; i++){
        printf("Digite o %d numero: ", i+1);
        scanf("%d", &num[i]);
    }
    
    for(j = 9; j > -1; j--){
        ordem[j] = num[k];
        k++;
    }

    for(j = 0; j < 10; j++){ 
        printf("%d\n", ordem[j]);
    }

    return 0;
}