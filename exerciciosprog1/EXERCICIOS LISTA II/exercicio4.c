#include <stdio.h>

int main() {

    int opc;
    float num1, num2, operacao;

    printf("***************CALCULADORA*************** \n");

    printf("Digite o numero 1: ");
    scanf("%f", &num1);
    printf("Digite o numero 2: ");
    scanf("%f", &num2);

    printf("Digite a opcao desejada: \n");
    printf("1 - Media entre os numeros \n2 - Diferenca do maior para o menor \n3 - Produto entre os numeros \n4 - Divisao do primeiro pelo segundo\n");
    scanf("%d", &opc);

    if(opc == 1) {
        operacao = (num1 + num2) / 2;
        printf("A media entre os numeros %.2f e %.2f eh %.2f", num1, num2, operacao);
    }
    else if(opc == 2) {
        if(num1 > num2){
            operacao = num1-num2;
            printf("A diferenca entre %.2f e %.2f eh %.2f", num1, num2, operacao);
        }
        else{
            operacao = num2-num1;
            printf("A diferenca entre %.2f e %.2f eh %.2f", num2, num1, operacao);

        }

    }
    else if(opc == 3) {
        operacao = num1*num2;
        printf("O produto entre os numeros %.2f e %.2f eh %.2f", num1, num2, operacao);

    }
    else if(opc == 4) {
        if(num2 == 0){
            printf("O numero 2 eh 0.00. Divisao por 0 resulta em indeterminacao", num2);
        }
        else{
            operacao = num1/num2;
            printf("A divisao entre %.2f por %.2f eh %.2f", num1, num2, operacao);
        }

    }
    else{
        printf("Opcao invalido. Fim do programa\n");
    }

    return 0;
}
