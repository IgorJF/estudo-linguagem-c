#include <stdio.h>

int main(){

    int num, numMaior, i;

    numMaior = 0;
    i = 0;

    do{
        printf("Digite um numero: ");
        scanf("%d", &num);

        if(num == 0){
            printf("Programa Encerrado\n");
        }
        else{
            if(num > numMaior){
                numMaior = num;
            }
            i++;
        }
        
    } while(num != 0);

    printf("%d numeros foram digitados, o maior foi %d", i, numMaior);

}