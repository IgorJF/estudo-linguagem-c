#include <stdio.h>

int main(){

    int num[5], fat[5], i, fatS;
    float inv[5];

    for(i = 0; i < 5; i++){
        fat[i] = 1; //inicializar o vetor
        printf("Digite o numero: ");
        scanf("%d", &num[i]);

        fatS = num[i];//para nao alterar o num[i]

        inv[i] = 1.0/num[i];
    
        while(fatS > 0){
            fat[i] = fat[i] * fatS;//acumuladora
            fatS = fatS - 1;
        }
    }

    for(i = 0; i < 5; i++){
        printf("%d\n", num[i]);
        printf("%d\n", fat[i]);
        printf("%.2f\n", inv[i]);
    }
}