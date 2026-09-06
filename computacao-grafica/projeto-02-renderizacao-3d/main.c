#include <stdio.h>
#include <SDL2/SDL.h>
#include "objeto-3d.h"
#include "janela-sdl.h"
#include "algebra-matrizes.h"

//desenha um objeto na tela
void desenhaObjetoTela(SDL_Renderer *renderer, float **matriz, tObjeto3d *objeto){
	for(int i = 0; i < objeto->nArestas; i++){
        int indice1 = objeto->arestas[i][0];
        int indice2 = objeto->arestas[i][1];
        
        float *ponto1 = objeto->pontos[indice1];
        float *ponto2 = objeto->pontos[indice2];
        
        float *m1 = multMatriz4dPonto(matriz, ponto1);
        float *m2 = multMatriz4dPonto(matriz, ponto2); 

        desenhaArestaTela(renderer, m1, m2);

        free(m1);
        free(m2);
	}
}

int main( int argc, char * argv[] ){

    if (SDL_Init( SDL_INIT_EVERYTHING) < 0){
        printf("SDL n�o inicializou! SDL Erro: %s\n", SDL_GetError());
    }

    SDL_Window *window = criaTela("Hello SDL World!");

    if(window == NULL){
        printf("SDL n�o criou a janela! SDL Erro: %s\n", SDL_GetError());
        return EXIT_FAILURE;
    }

    SDL_Renderer *renderer = SDL_CreateRenderer(window, -1, 0);

    SDL_Event windowEvent;
	
    tObjeto3d *objeto = carregaObjeto("cubo-3d.dcg");
	
	escalaObjeto(objeto, 0.1, 0.1, 0.1);
	//rotacionaObjetoEixoX(objeto, 67);

    while(1){
        if( SDL_PollEvent(&windowEvent)){
            if(windowEvent.type == SDL_QUIT){
                break;
            }
        }
        SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255);
        SDL_RenderClear(renderer);

        SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);
		
		//rotacionaObjetoEixoY(objeto, 1.0); 
        //rotacionaObjetoEixoX(objeto, 0.5);
		
		desenhaObjetoTela(renderer, objeto->modelMatrix, objeto);


        SDL_RenderPresent(renderer);
    }

    desalocaTela(window);
    SDL_Quit();

    return EXIT_SUCCESS;
}
