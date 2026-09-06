#ifndef VIEWPORT_H
#define VIEWPORT_H
#include "objeto.h"

int **criaTela(int larg, int alt);
void desenhaLinha(int **tela, int x0, int y0, int x1, int y1);
void imprimeTela(int **tela);
void ndcToViewport(float x1, float y1, float x2, float y2, int *xa, int *xb, int *ya, int *yb);
void desenhaObjeto(int **tela, Objeto obj);

#endif