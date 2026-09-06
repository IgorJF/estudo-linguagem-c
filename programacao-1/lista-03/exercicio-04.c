#include <stdio.h>

int main(){

    int i, qtdgraos, soma;

    for(i = 0; i < 64; i++){
        if(i == 0){
            qtdgraos = 1;
            soma = qtdgraos;
        }
        else{
            qtdgraos = 2 * qtdgraos;
            soma = soma + qtdgraos; 
        }
        //printf("%d\n", qtdgraos);
        //printf("%d\n", soma);
    }

    printf("A soma de graos %d\n", soma);


    return 0;
}