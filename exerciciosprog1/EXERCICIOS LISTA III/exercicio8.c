#include <stdio.h>

int main(){

    int i, qtdAndares, qtdPessoas, qtdEntram, qtdSaem;
    qtdPessoas = 0;

    printf("Qual a quantidade de andares do predio: ");
    scanf("%d", &qtdAndares);

    for(i = 0; i < qtdAndares; i++){
        if(i == 0){
            printf("#####1° Andar#####\n");
            printf("Qual a quantidade de pessoas que entrou: ");
            scanf("%d", &qtdEntram);
            qtdPessoas = qtdEntram;
        }
        else{
            printf("#####%d° Andar#####\n", i+1);
            printf("Qual a quantidade de pessoas que entrou: ");
            scanf("%d", &qtdEntram);
            printf("Qual a quantidade de pessoas que sairam: ");
            scanf("%d", &qtdSaem);

            qtdPessoas = qtdPessoas + (qtdEntram - qtdSaem);
            
            if(qtdPessoas > 15){
                while(qtdPessoas > 15){
                    printf("Excesso de passageiros. Devem sair %d pessoas.\n", qtdPessoas - 15);
                    printf("Qual a quantidade de pessoas que sairam: ");
                    scanf("%d", &qtdSaem);
                    qtdPessoas = qtdPessoas - qtdSaem;
                }
            }
            else if(qtdPessoas < 0){
                while(qtdPessoas < 0){
                    printf("Nao eh possivel ter menos que 0 pessoas.\n");
                    printf("Qual a quantidade de pessoas que entrou: ");
                    scanf("%d", &qtdEntram);
                    qtdPessoas = qtdEntram;
                }
            }

            if(i+1 == qtdAndares){
                printf("Ultimo Andar\n");
                printf("O numero de pessoas no elevador eh %d\n", qtdPessoas);
                printf("Devem sair %d", qtdPessoas);
            }
        }
    }


    return 0;
}