#ifndef OBJETO_H
#define OBJETO_H

#define T 30

typedef struct{
    float x;
    float y;
} Vertice;

typedef struct{
	char nome[T];
    int qtdVertices;
    Vertice *vertices;
} Objeto;

Objeto carregarObjeto(char nomeArquivo[]);
void imprimirObjeto(Objeto obj);
void liberarObjeto(Objeto obj);

#endif