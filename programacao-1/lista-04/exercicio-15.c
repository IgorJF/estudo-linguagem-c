#include <stdio.h>

int main(){

    int i,j, X[5], Y[5];

    for(i = 0;i < 5;i++){
        printf("Digite um numero para X: ");
        scanf("%d", &X[i]);

    }

    for(i = 0;i < 5;i++){
        printf("Digite um numero para Y: ");
        scanf("%d", &Y[i]);
    }

    for(i = 0;i < 5;i++){
        if(X[i] == Y[j]){
            printf("%d",X[i]);
            printf("%d",Y[i]);
        }
    }


    return 0;
}