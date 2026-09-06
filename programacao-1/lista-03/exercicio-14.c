#include <stdio.h>

int main() {

    int dividendo, divisor, resto, i;

    printf("Digite o dividendo: ");
    scanf("%d", &dividendo);
    printf("Digite o divisor: ");
    scanf("%d", &divisor);

    resto = dividendo;
    i = 0;

    while(resto >= divisor){
        resto = resto - divisor;
        i++;

    }

    printf("%d\n", resto);
    printf("%d\n", i);



    return 0;
}
