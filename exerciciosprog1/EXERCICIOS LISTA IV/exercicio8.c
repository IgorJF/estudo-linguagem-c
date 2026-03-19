#include <stdio.h>

int main()
{
    float V1[5], V2[5], VR[5];
    int i, OP;
    
    for(i = 0; i < 5; i++){
        printf("Digite o numero da posicao %d do vetor 1: ", i+1);
        scanf("%f", &V1[i]);
        printf("Digite o numero da posicao %d do vetor 2: ", i+1);
        scanf("%f", &V2[i]);
        
        printf("Escolha a operacao:\n1 - Soma\n2 - Subtracao\n3 - Multiplicacao\n4 - Divisao\n");
        scanf("%d", &OP);
        
        switch(OP){
            case 1:
                VR[i] = V1[i] + V2[i];
                break;
            case 2:
                VR[i] = V1[i] - V2[i];
                break;
            case 3:
                VR[i] = V1[i] * V2[i];
                break;
            case 4:
                VR[i] = V1[i] / V2[i];
                break;
            default:
                printf("Essa opcao nao eh valida.");
                break;
        }
    }
    
    for(i = 0; i < 5; i++){
        printf("%f\n", VR[i]);
    }
    
    return 0;
}