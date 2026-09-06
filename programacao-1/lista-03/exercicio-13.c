#include <stdio.h>

#define residencial 0.3
#define comercial 0.5
#define industrial 0.7

int main(){

    int numConsumidor, i, tipo;
    float consumo, conta, totalConsumo, totalCusto;
    float custoResidencial, custoComercial, custoIndustrial, consumoResidencial, consumoComercial, consumoIndustrial;

    totalConsumo = 0;
    totalCusto = 0;
    custoResidencial = 0;
    custoComercial = 0;
    custoIndustrial = 0;
    consumoResidencial = 0;
    consumoIndustrial = 0;
    consumoComercial = 0;
    i = 0;

    while(numConsumidor !=0){
        printf("Qual o numero do consumidor: ");
        scanf("%d", &numConsumidor);
        if(numConsumidor == 0){
            break;
        }
        printf("Qual foi o total consumido por ele: ");
        scanf("%f", &consumo);
        printf("Qual o codigo do consumidor: \n1 - Residencial\n2 - Comercial\n3 - Industrial\n");
        scanf("%d", &tipo);

        switch (tipo) {
        case 1:
            conta = consumo * residencial;
            custoResidencial = custoResidencial + conta;
            consumoResidencial = consumoResidencial + consumo;
            break;
        case 2:
            conta = consumo * comercial;
            custoComercial = custoComercial + conta;
            consumoComercial = consumoComercial + consumo;
            break;
        case 3:
            conta = consumo * industrial;
            custoIndustrial = custoIndustrial + conta;
            consumoIndustrial = consumoIndustrial + consumo;
            break;
        default:
            printf("Nao existe essa opcao.\n");
            break;
        }

        printf("A conta do cosumidor %d, que teve um consumo de %.2f resultou em R$ %.2f\n", numConsumidor, consumo, conta);

        totalCusto = totalCusto + conta;
        totalConsumo = totalConsumo + consumo;
        i++;

    } 

    printf("Consumo Total: %.2f\n", totalConsumo);
    printf("Custo Total: R$ %.2f\n", totalCusto);
    printf("Media de Consumo: %.2f\n", totalConsumo/i);
    printf("Consumo Residencial: %.2f\n", consumoResidencial);
    printf("Consumo Comercial: %.2f\n", consumoComercial);
    printf("Consumo Industrial: %.2f\n", consumoIndustrial);
    printf("Custo Residencial: R$ %.2f\n", custoResidencial);
    printf("Custo Comercial: R$ %.2f\n", custoComercial);
    printf("Custo Industrial: R$ %.2f\n", custoIndustrial);


    return 0;
}