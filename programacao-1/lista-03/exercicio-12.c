#include <stdio.h>

int main(){

    int opc, num, numMaior, numMenor, i;

    numMaior = 0;
    numMenor = 0;
    i = 0;

    do{
        printf("Digite um numero: ");
        scanf("%d", &num);

        if(i == 0){
            numMaior = num;
            numMenor = num;
        }
        else if(num > numMaior){
            numMaior = num;
        }
        else if(num < numMenor){
            numMenor = num;
        }

        printf("Deseja digitar mais um numero: \n1 - SIM\n0 - NAO\n");
        scanf("%d", &opc);

        i++; //o i serve para ter controle da primeira execucao do dowhile

    } while(opc != 0);


    printf("Maior: %d\n", numMaior);
    printf("Menor: %d\n", numMenor);

    return 0;
}