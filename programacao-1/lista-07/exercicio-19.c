#include <stdio.h>

void retornaHMS(int S);

int main()
{
    
    int segundos;
    
    printf("Digite o tempo em segundos: ");
    scanf("%d", &segundos);

    retornaHMS(segundos);

    return 0;
}

void retornaHMS(int S){
    int horas, minutos, segundos;
    
    horas = S / 3600;
    minutos = ((S % 3600) / 60);
    segundos = ((S % 3600) % 60);
    
    printf("%d horas, %d minutos, %d segundos.", horas, minutos, segundos);
}
