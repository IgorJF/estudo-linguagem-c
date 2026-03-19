#include <stdio.h>

int main() {
    
    float salario, salarioNovo;

    printf("Digite o salario do funcionario: ");
    scanf("%f", &salario);

    if (salario < 500.00) {
        salarioNovo = salario * 1.3;
        printf("O salario do funcionario era R$ %.2f e apos o resjuste ficou R$ %.2f", salario, salarioNovo);
    }
    else {
        printf("O funcionario nao tem direito a aumento pois recebe mais de R$ 500.00");
    }
    

    return 0;
}