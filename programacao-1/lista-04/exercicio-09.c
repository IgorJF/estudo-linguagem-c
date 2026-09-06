#include <stdio.h>

int main()
{
    float PC[5], PV[5], PR[5];
    int i, contM1, contM2, contM3;
    
    contM1 = 0;
    
    for(i = 0; i < 5; i++){
        printf("Digite o preco de compra da mercadoria %d: ", i+1);
        scanf("%f", &PC[i]);
        printf("Digite o preco de venda da mercadoria %d: ", i+1);
        scanf("%f", &PV[i]);
        
        PR[i] = (PV[i]-PC[i])/PC[i];
        
        if(PR[i] < 0.1){
            contM1++;
        }
        else if(PR[i] < 0.2){
            contM2++;
        }
        else{
            contM3++;
        }
    }
    
    for(i = 0; i < 5; i++){
        printf("Mercadoria %d: %f\n", i+1, PR[i]*100);
    }
    
    printf("Existem %d com lucro menor que ate 10%%.\n", contM1);
    printf("Existem %d com lucro menor que ate 20%%.\n", contM2);
    printf("Existem %d com lucro maior que 20%%.\n", contM3);
    
    return 0;
}