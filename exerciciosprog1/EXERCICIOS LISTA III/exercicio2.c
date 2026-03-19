#include <stdio.h>

int main(){

    int num, numMaior, numMenor, soma, i;

    numMaior = 0;
    numMenor = 0;
    soma = 0;

    for(i = 0; i < 20; i++){
        do {
            printf("%d - Digite um número: ", i+1);
            scanf("%d", &num);

            if (num < 0) {
                printf("Apenas numeros positivos.\n");
            }
        } while (num < 0); 
        //no caso ele so iria criar um loop infinito caso a condicao fosse num>0, 
        //o por que do do-while executar 20 vezes é o for, no caso atual, ele sai do laço. E caso permanceça no do-while, 
        //ele não vai aumentar o numero de execucoes pois o for, nao foi completo para fazer a iteração do i++

        if(i == 0){
            numMaior = num;
            numMenor = num;
        }
        else {
            if(num > numMaior){
                numMaior = num;
            }
            else if(num < numMenor){
                numMenor = num;
            }
        }

        soma = soma + num;

    }

    printf("Maior: %d\n", numMaior);
    printf("Menor: %d\n", numMenor);
    printf("Media: %d\n", soma/20);

    return 0;
}