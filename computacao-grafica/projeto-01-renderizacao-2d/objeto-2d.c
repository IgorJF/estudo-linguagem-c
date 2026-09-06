#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "objeto.h"

#define T 30

Objeto carregarObjeto(char nomeArquivo[]) {
    Objeto obj;
    FILE *arquivo;
	
	//apenas para conseguir salvar o nome do objeto
	//a funcao copia o nome do arquivo para struct
	//evita o erro de ter que atribuir string ao vetor
	strncpy(obj.nome, nomeArquivo, T-1);
    obj.nome[T-1] = '\0';

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
	printf("Objeto: %s\n", obj.nome);
	printf("Quantidade de vertices: %d\n", obj.qtdVertices);
	for(int i = 0; i < obj.qtdVertices; i++) {
        printf("Vertice %d: (%.2f, %.2f)\n", i, obj.vertices[i].x, obj.vertices[i].y);
    }
}

void liberarObjeto(Objeto obj) {
    free(obj.vertices);
}
	