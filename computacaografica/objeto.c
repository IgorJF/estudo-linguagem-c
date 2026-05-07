#include <stdio.h>
#include <stdlib.h>
#include "objeto.h"

Objeto carregarObjeto(char nomeArquivo[]) {
    Objeto obj;
    FILE *arquivo;

    arquivo = fopen(nomeArquivo, "r");
	
	printf("Abrindo arquivo: %s\n", nomeArquivo);

    if(arquivo == NULL) {
		perror("Erro");
        obj.qtdVertices = 0;
        obj.vertices = NULL;
        return obj;
    }
	
	//le a primeira linha com a quantidade de vertices
    fscanf(arquivo, "%d", &obj.qtdVertices);
	
	//aloca espaco para vertices no tamanho de quantidade de vertices
    obj.vertices = (Vertice *) malloc(obj.qtdVertices * sizeof(Vertice));
	
	if (obj.vertices == NULL) {
        printf("Erro: Memória insuficiente.\n");
        fclose(arquivo);
        obj.qtdVertices = 0;
        return obj;
    }

    //le cada vertice, pulando espacos para chegar na proxima coordenada, como tem %f ele ignora espacos em branco ate encontrar o numero float
    for(int i = 0; i < obj.qtdVertices; i++) {
        fscanf(arquivo, "%f %f", &obj.vertices[i].x, &obj.vertices[i].y);
    }
	
    fclose(arquivo);
	
    return obj;
}

//apenas para verificar se coletou as coordenadas corretamente
void imprimirObjeto(Objeto obj){
	printf("Quantidade de vertices: %d\n", obj.qtdVertices);
	for(int i = 0; i < obj.qtdVertices; i++) {
        printf("Vertice %d: (%.2f, %.2f)\n", i, obj.vertices[i].x, obj.vertices[i].y);
    }
}

void liberarObjeto(Objeto obj) {
    free(obj.vertices);
}
	