#include <stdio.h>

int main() {
    float num1 = 0, num2 = 0;
    float divisao = 0;

    printf("Digite o número que será o dividendo:");
    scanf("%f", &num1);

   while(num2==0){
    printf("Digite o número que sera o divisor: ");
    scanf("%f", &num2);
        if(num2==0){
            printf("Você não pode dividir por 0\n");
        }
   } 
    
    divisao = num1 / num2;

    printf("O resultado da divisão entre o número %.2f e o número %.2f é %.2f", num1, num2, divisao);
}