#include <stdio.h>
#include "listaestatica.h"

int main(){
	
	lista_nums *li = cria_lista(); //chamo a lista e guardo o endereco nessa variavel li
	
	//1
	insere_lista_final(li, 4);
	insere_lista_final(li, 8);
	insere_lista_final(li, 10);
	insere_lista_final(li, 12);
	insere_lista_final(li, 20);
	exibir_lista(li);
	printf("\n");
	//a)
	insere_lista_posicao(li, 2, 15);
	exibir_lista(li);
	printf("\n");
	//b)
	remove_lista_posicao(li, 4);
	exibir_lista(li);
	printf("\n");
	//c)
	insere_lista_inicio(li, 3); 
	exibir_lista(li);
	printf("\n");
	
	libera_lista(li);
	
	return 0;
}