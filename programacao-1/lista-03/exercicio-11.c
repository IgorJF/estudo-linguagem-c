#include <stdio.h>

int main(){

    int opc;
    char nomeComodo[50];
    float areaComodo, areaTotal, largura, comprimento;

    areaTotal = 0;

    printf("Deseja iniciar o programa de calculo de area da casa: \n1 - SIM \n0 - NAO\n");
    scanf("%d", &opc);

    while(opc != 0){
        printf("Digite o nome do comodo: ");
        scanf("%s", nomeComodo);

        printf("Digite a largura do comodo: ");
        scanf("%f", &largura);

        printf("Digite o comprimento do comodo: ");
        scanf("%f", &comprimento);

        areaComodo = largura * comprimento;

        printf("A area do comodo %s e area do comodo %.2f\n", nomeComodo, areaComodo);

        areaTotal = areaTotal + areaComodo;

        printf("Deseja continuar o programa de calculo de area da casa: \n1 - SIM \n0 - NAO\n");
        scanf("%d", &opc);

    }

    printf("A area total eh %.2f", areaTotal);

    return 0;
}



