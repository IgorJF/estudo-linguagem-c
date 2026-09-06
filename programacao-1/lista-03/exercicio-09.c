#include <stdio.h>

#define jogadores 22

int main(){

    int i;
    float salario, salarioAtual, totalFolha, totalFolhaAtual;
    char nome[50];

    totalFolha = 0;
    totalFolhaAtual = 0;

    for(i = 0; i < jogadores; i++){

        printf("Qual o nome do jogador: ");
        scanf("%s", nome);
        printf("Digite o salario do jogador: ");
        scanf("%f", &salario);

        totalFolha = totalFolha + salario;

        if(salario <= 1000){
            salarioAtual = salario * 1.20;
        }
        else if(salario <= 5000){
            salarioAtual = salario * 1.10;
        }
        else{
            salarioAtual = salario;
        }

        totalFolhaAtual = totalFolhaAtual + salarioAtual;

        printf("O jogador %s recebia R$ %.2f, agora recebe R$ %.2f\n", nome, salario, salarioAtual);

    }

    printf("Folha Antiga: R$ %.2f\n", totalFolha);
    printf("Folha Nova: R$ %.2f\n", totalFolhaAtual);
    printf("Reajuste: %.2f%%\n", (totalFolhaAtual/totalFolha-1)*100);


}