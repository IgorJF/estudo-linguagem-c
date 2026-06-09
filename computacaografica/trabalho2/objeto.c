#include <stdio.h>
#include <SDL2/SDL.h>
#include "objeto.h"
#include "algebra.h"

//Le as informacoes de um arquivo e as carrega num novo objeto alocado
tObjeto3d *carregaObjeto(char *nomeArquivo){
    FILE *arquivo = fopen(nomeArquivo, "r");
     if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo ou ele nao existe.\n");
        return NULL;
    }
    tObjeto3d *obj = (tObjeto3d *)malloc(sizeof(tObjeto3d));

    fscanf(arquivo, "%d", &obj->nPontos);
    obj->pontos = (float **)malloc(obj->nPontos * sizeof(float *));
    for(int i = 0;i < obj->nPontos; i++){
        obj->pontos[i] = (float *)malloc(3 * sizeof(float));
        fscanf(arquivo, "%f %f %f", &obj->pontos[i][0], &obj->pontos[i][1], &obj->pontos[i][2]);
    }

    fscanf(arquivo, "%d", &obj->nArestas);
    obj->arestas = (int **)malloc(obj->nArestas * sizeof(int *));
    for(int i = 0;i < obj->nArestas; i++){
        obj->arestas[i] = (int *)malloc(2 * sizeof(int));
        fscanf(arquivo, "%d %d", &obj->arestas[i][0], &obj->arestas[i][1]);
    }

    obj->modelMatrix = (float **)malloc(4 * sizeof(float *));
    for(int i = 0; i < 4; i++){
        obj->modelMatrix[i] = (float *)malloc(4 * sizeof(float));
    }
    criaIdentidade4d(obj->modelMatrix);

    fclose(arquivo);

    return obj;
}

//Altera a modelMatrix de um objeto para redimenciona-lo segundo os par�metros escalaX, escalaY e escalaZ
void escalaObjeto(tObjeto3d *objeto, float escalaX, float escalaY, float escalaZ){

}

//Altera a modelMatrix de um objeto para translada-lo segundo os par�metros transX, transY e transZ
void transladaObjeto(tObjeto3d *objeto, float transX, float transY, float transZ){

}

//Altera a modelMatrix de um objeto para rotaciona-lo ao redor do eixo X segundo o angulo informado
void rotacionaObjetoEixoX(tObjeto3d *objeto, float angulo){

}

//Altera a modelMatrix de um objeto para rotaciona-lo ao redor do eixo Y segundo o angulo informado
void rotacionaObjetoEixoY(tObjeto3d *objeto, float angulo){

}

//Altera a modelMatrix de um objeto para rotaciona-lo ao redor do eixo Z segundo o angulo informado
void rotacionaObjetoEixoZ(tObjeto3d *objeto, float angulo){

}

//Imprime um objeto no terminal
void imprimeObjetoDBG(tObjeto3d *objeto){
    printf("Vertices: %d\n", objeto->nPontos);
    for(int i = 0;i < objeto->nPontos;i++){
        printf("%f\n", objeto->pontos[i][0]);
        printf("%f\n", objeto->pontos[i][1]);
        printf("%f\n", objeto->pontos[i][2]);
    }

    printf("Arestas: %d\n", objeto->nArestas);
    for(int i = 0;i < objeto->nArestas;i++){
        printf("%d\n", objeto->arestas[i][0]);
        printf("%d\n", objeto->arestas[i][1]);
    }
}

//Desaloca o objeto
void desalocaObjeto(tObjeto3d *objeto){
    for(int i = 0;i < objeto->nPontos;i++){
        free(objeto->pontos[i]);
    }
    free(objeto->pontos);

    for(int i = 0;i < objeto->nArestas;i++){
        free(objeto->arestas[i]);
    }
    free(objeto->arestas);

    for(int i = 0; i < 4; i++){
        free(objeto->modelMatrix[i]);
    }
    free(objeto->modelMatrix);

    free(objeto);
}

