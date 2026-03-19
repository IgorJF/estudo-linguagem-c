#include <stdio.h>

int main(){

    int i;

    for(i = 1; i < 101; i++){
        printf("%d\n", i);
        
        if(i % 10 == 0){
            printf("O numero %d eh Multiplo de 10\n", i);
        }
    }

}