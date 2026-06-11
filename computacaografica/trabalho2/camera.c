#include <stdio.h>
#include <SDL2/SDL.h>
#include "camera.h"

tCamera3d *criaCamera(){
    tCamera3d *camera = (tCamera3d*)malloc(sizeof(tCamera3d));
    camera->posicao = (float*)malloc(3*sizeof(float));
    camera->foco = (float*)malloc(3*sizeof(float));
    camera->cima = (float*)malloc(3*sizeof(float));
    camera->viewMatrix = (float**)malloc(4*sizeof(float*));
    for(int i=0; i<4; i++){
        camera->viewMatrix[i] = (float*)malloc(4*sizeof(float));
    }
    return camera;
}

void defineCamera(tCamera3d *camera, float posX, float posY, float posZ, float focX, float focY, float focZ, float cimX, float cimY, float cimZ){
    camera->posicao[0] = posX;
    camera->posicao[1] = posY;
    camera->posicao[2] = posZ;

    camera->foco[0] = focX;
    camera->foco[1] = focY;
    camera->foco[2] = focZ;

    camera->cima[0] = cimX;
    camera->cima[1] = cimY;
    camera->cima[2] = cimZ;
}

void desalocaCamera(tCamera3d *objeto){
    free(objeto->posicao);
    free(objeto->foco);
    free(objeto->cima);
    for(int i=0; i<4; i++){
        free(objeto->viewMatrix[i]);
    }
    free(objeto->viewMatrix);
    free(objeto);
}

//tivemos dificuldades nessa parte