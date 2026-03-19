#include <stdio.h>

int main(){
    float salario = 0, vendas = 0, comissao = 0, total = 0;

    printf("Digite o salário do funcionário: ");
    scanf("%f", &salario);

    printf("Digite o valor total das vendas do funcionario: ");
    scanf("%f", &vendas);
    comissao = vendas*0.04;

    total = salario + comissao;
    printf("O funcionario irá receber um salario de R$ %.2f e um valor de R$ %.2f de comissao sobre suas vendas, resultando em R$ %.2f", salario,comissao,total);

    return 0;
}