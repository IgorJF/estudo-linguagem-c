#include <stdio.h>

int main() {

    int opc;
    float num1, num2, operacao;

    printf("Digite o primeiro numero: ");
    scanf("%f", &num1);

    printf("Digite o segundo numero: ");
    scanf("%f", &num2);

    printf("Digite o numero da operacao desejada: \n");
    printf("1 - Media entre os dois numeros \n2 - Diferenca do maior para o menor \n3 - Produto entre dois numeros\n");
    scanf("%d", &opc);

    if (opc == 1) {
        operacao = (num1+num2) / 2;
        printf("A media entre os numeros %.2f e %.2f eh %.2f", num1, num2, operacao);
    }
    else if (opc == 2) {
        if (num1 > num2) {
            operacao = num1 - num2;
            printf("A diferenca de %.2f para %.2f eh %.2f", num1, num2, operacao);
        }
        else {
            operacao = num2 - num1;
            printf("A diferenca de %.2f para %.2f eh %.2f", num2, num1, operacao);
        }
    }
    else if (opc == 3) {
        operacao = num1*num2;
        printf("O produto entre o numero %.2f e o numero %.2f eh %.2f", num1, num2, operacao);
    }
    else {
        printf("Essa opcao nao existe. Tente Novamente. Fim do programa \n");
    }

    return 0;
}