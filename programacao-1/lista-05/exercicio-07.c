#include <stdio.h>

#define D1 5
#define D2 10
#define D3 3

int main(){

    int M[D1][D2], MR[D1][D3], i, j, maiorV[D1], menorV[D1], somaV[D1], soma, menor, maior, temp;

    maior = 0;
    menor = 0;
    soma = 0;
    temp = 0;

    for(i = 0;i < D1;i++){
        for(j = 0;j < D2;j++){
            printf("Digite o numero da posicao [%d][%d]: ", i, j);
            scanf("%d", &M[i][j]);

            soma = soma + M[i][j];

            if(i == temp && j == 0){
                maior = M[i][j];
                menor = M[i][j];
            }

            if(M[i][j] > maior){
                maior = M[i][j];
            }
            else if(M[i][j] < menor){
                menor = M[i][j];
            }
        }
        somaV[i] = soma;
        menorV[i] = menor;
        maiorV[i] = maior;

        soma = 0;

        temp++;
    }

    //tenho tres variaves que sao vetor de tamanho 5 que vao pegar os 5 valores que no caso são de cada coluna, conforme vai passando as linhas
    //depois vou setar cada um na matriz resultante sendo o i variavel e escolhendo a posicao da coluna para cada 0,1,2

    for(i = 0;i < D1;i++){
        MR[i][0] = maiorV[i];
        MR[i][1] = menorV[i];
        MR[i][2] = somaV[i];
    }

    for(i = 0;i < D1;i++){
        for(j = 0;j < D3;j++){
            printf("%d ", MR[i][j]);
        }
        printf("\n");
    }


    return 0;
}