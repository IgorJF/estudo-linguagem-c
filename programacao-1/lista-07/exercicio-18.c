
#include <stdio.h>

int retornaSeg(int H, int M, int S);

int main()
{
    
    int horas, minutos, segundos;
    
    printf("Digite as horas: ");
    scanf("%d", &horas);
    printf("Digite os minutos: ");
    scanf("%d", &minutos);
    printf("Digite os segundos: ");
    scanf("%d", &segundos);
    
    printf("Isso são %d segundos.", retornaSeg(horas, minutos, segundos));
    

    return 0;
}

int retornaSeg(int H, int M, int S){
    return (((H*60) + M)*60)+ S;
}