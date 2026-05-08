#include <stdio.h>
#include "objeto.h"
#include "viewport.h"

#define WIDTH 100
#define HEIGHT 50

//entender todo o viewport
//fazer todos os desenhos funcionarem
//conseguir adicionar mais de um arquivo e desenhar
//fazer rotacao, translacao e escala
//controlar trasnformacoes com teclado e mouse
//deletar objeto

int main(){

    Objeto casa;
    int **tela;

    casa = carregarObjeto("casaNDC.dcg");
	
	imprimirObjeto(casa);

    tela = criaTela(WIDTH, HEIGHT);
    desenhaObjeto(tela, casa);

    imprimeTela(tela);
    liberarObjeto(casa);

    return 0;
}