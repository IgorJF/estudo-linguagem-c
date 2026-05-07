#ifndef OBJETO_H
#define OBJETO_H

typedef struct{
    float x;
    float y;
} Vertice;

typedef struct{
    int qtdVertices;
    Vertice *vertices;
} Objeto;

Objeto carregarObjeto(char nomeArquivo[]);
void imprimirObjeto(Objeto obj);
void liberarObjeto(Objeto obj);

#endif