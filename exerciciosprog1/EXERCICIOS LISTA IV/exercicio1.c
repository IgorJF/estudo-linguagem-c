#include <stdio.h>

int main()
{
    int num1[5], num2[5], soma[5], i, j, k;
    
    for(i = 0; i < 5; i++){
        printf("Digite um numero (Valores i): ");
        scanf("%d", &num1[i]);
    }
    
    for(j = 0; j < 5; j++){
        printf("Digite um numero (Valores j): ");
        scanf("%d", &num2[j]);
    }
    
    for(k = 0; k < 5; k++){
        soma[k] = num1[k] + num2[k];
        printf("A soma dos numeros %d e %d eh %d.\n", num1[k], num2[k], soma[k]);
    }


    return 0;
}