#include <stdio.h>
#include <stdlib.h>
#include "listaestatica.h"

struct lista{
	int dados[MAX]; //define o vetor de numeros, de tamanho 100
	int qtd; //usado para controlar a quantidade
};

lista_nums* cria_lista(){ //eh ponteiro por que retorna um endereco
    lista_nums *li; //cria um ponteiro do tipo lista_nums ou seja que aponta para listas_nums
    li = (lista_nums*) malloc(sizeof(lista_nums)); //malloc retorna o endereco da memoria que o SO reservou para criar essa lista, como li é um ponteiro, ele armazena isso
	//sizeof cria um bloco de memoria exato do tamanho da struct, se tem 100 ints do vetor, 1 int do qtd, e cada int tem 4 bytes, então tem 404bytes e malloc, pede ao so esse espaço reservado
	//como se fosse malloc(404), ai ele devolve o ponteiro com esse espaco reservado
	//ai malloc retorna um ponteiro void e (lista_nums*) transforma em um ponteiro do tipo lista_nums
    if(li != NULL) //se a memoria foi alocada e li guardou o endereco, li eh diferente de NULL
        li->qtd = 0; //entao apontara para qtd, colocando seu valor como 0, vai ate o endereco guardado em li e pega o campo qtd dentro, e coloca como 0
    return li; //retorna o endereco da lista
}

void libera_lista(lista_nums* li) {
    free(li);
}

int tamanho_lista(lista_nums* li) {
    if (li == NULL)
        return -1;
    else
        return li->qtd;
}

int lista_cheia(lista_nums* li) {
    if (li == NULL)
        return -1;

    return (li->qtd == MAX);
}

int lista_vazia(lista_nums* li) {
    if (li == NULL)
        return -1;

    return (li->qtd == 0);
}

int insere_lista_final(lista_nums* li, int num) {
    if (li == NULL || lista_cheia(li)) return 0;

    // usamos direto a quantidade atual como índice
    li->dados[li->qtd] = num; 
    
    li->qtd++; // Aumenta para o próximo
    return 1;
}

// Adaptando para inserir em uma posição POS (1, 2, 3...)
int insere_lista_posicao(lista_nums* li, int pos, int num){
    if (li == NULL || lista_cheia(li)) return 0;
    if (pos < 1 || pos > li->qtd + 1) return 0; // Validação da posição

    int i;
    // O "pulo do gato": transformar posição (humana) em índice (C)
    int indice = pos - 1; 

    // O "Empurra-empurra" para a direita
    for(i = li->qtd - 1; i >= indice; i--){
        li->dados[i+1] = li->dados[i]; 
    }

    li->dados[indice] = num; // Coloca o número na vaga aberta
    li->qtd++;               // li: ponteiro, ->: acessa, qtd: gaveta, ++: soma 1
    return 1;
}

int insere_lista_inicio(lista_nums* li, int num){
    if (li == NULL || lista_cheia(li)) return 0;

    int i;
    //percorre a lista movendo
    //os elementos para a proxima posicao
    for (i=li->qtd-1; i>=0; i--) {
        li->dados[i+1] = li->dados[i];
    }
    //adiciona na posicao 1 da lista
    li->dados[0] = num;
    //incrementa a quantidade da lista
    li->qtd++;
    return 1;
}

int remove_lista_posicao(lista_nums* li, int pos){
    // 1. Segurança: A lista existe? Ela está vazia?
    if (li == NULL || li->qtd == 0) return 0;
    
    // 2. Segurança: A posição existe na lista atual?
    if (pos < 1 || pos > li->qtd) return 0; 

    int i;
    int indice = pos - 1; // Traduz: Posição 4 vira Índice 3

    // 3. O "Puxa-Puxa" para a esquerda
    for(i = indice; i < li->qtd - 1; i++){
        li->dados[i] = li->dados[i+1]; 
    }

    // 4. Diminui a quantidade
    li->qtd--;         
    return 1;
}

void exibir_lista(lista_nums* li){
    if (li == NULL || li->qtd == 0) {
        printf("Lista vazia ou nao existe.\n");
        return;
    }

    int i;
    // Percorre do índice 0 até a quantidade atual de elementos
    for(i = 0; i < li->qtd; i++){
        // Exibimos (i + 1) para o usuário ver "1º, 2º..." 
        // mas acessamos li->dados[i] porque o C começa no 0
        printf("%dº elemento: %d\n", i + 1, li->dados[i]);
    }        
}