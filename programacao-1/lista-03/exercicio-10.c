#include <stdio.h>

int main(){

    int num, i, cont;

    cont = 0;

    do{
        printf("Digite um numero: ");
        scanf("%d", &num);
    } while (num < 0);

    for(i = 2; i < num; i++){
        if(num % i == 0){
            cont++;
        }
        //comeca no dois pois o numero primo e divisivel por 1, divisao por 0 nao esxiste
        //e vai ate o antecessor do primo, pois num/num % 0
    }

    if(cont > 0){
        printf("Numero Nao Primo");
    }
    else{
        printf("Numero Primo");
    }



    return 0;
}