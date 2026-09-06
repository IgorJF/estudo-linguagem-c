#ifndef LISTAESTATICA_H_INCLUDED
#define LISTAESTATICA_H_INCLUDED
#define MAX 100

typedef struct lista lista_nums;

lista_nums *cria_lista();
void libera_lista(lista_nums* li);
int tamanho_lista(lista_nums* li);
int lista_cheia(lista_nums* li);
int lista_vazia(lista_nums* li);
int insere_lista_final(lista_nums* li, int num);
int insere_lista_posicao(lista_nums* li, int pos, int num);
int insere_lista_inicio(lista_nums* li, int num);
int remove_lista_posicao(lista_nums* li, int pos);
void exibir_lista(lista_nums* li);

#endif