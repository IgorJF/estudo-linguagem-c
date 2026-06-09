#include <stdio.h>
#include <stdlib.h>

//Ajusta valores de um matriz 4d para uma matriz identidade
void criaIdentidade4d(float **novaMatriz){
    //criar matriz identidade
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            if(i == j){
                novaMatriz[i][j] = 1;
            } else {
                novaMatriz[i][j] = 0;
            }
        }
    }
}

//Imprime uma matriz 4d no terminal
void imprimeMatriz4dDBG(float **matriz){
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            printf("%f ", matriz[i][j]);
        }
        printf("\n");
    }
}

//Multiplica uma matriz 4d por um ponto
float *multMatriz4dPonto(float **matriz, float *ponto){
    float *temp = (float *)malloc(4 * sizeof(float)); //para guardar de forma permanente o vetor
    
    for(int i = 0; i < 4; i++){
        temp[i] = 0;
        for(int j = 0; j < 4; j++){
            float valorPonto;
            if (j == 3){
                valorPonto = 1.0; //setar valores da ultima coluna como 1
            } 
            else{
                valorPonto = ponto[j]; 
            }
            temp[i] += matriz[i][j] * valorPonto;
        }
    }
    return temp;
}

//Multiplica duas matrizes 4d salvando o resultado na segunda matriz
void multMatriz4d(float **matrizA, float **matrizB){
    // nao da para salvar o resultado na matriz que estamos multiplicando diretamente, ai cria uma matriz 
    // temporaria para armazenar o resultado da multiplicacao e depois copiamos os valores de volta para a matrizB apos a multiplicacao. 
    float temp[4][4];
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            temp[i][j] = 0;
            for(int k = 0; k < 4; k++){
                temp[i][j] += matrizA[i][k] * matrizB[k][j];
            }
        }
    }
    //copiando da matriz temporaria para b
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            matrizB[i][j] = temp[i][j];
        }
    }
}
