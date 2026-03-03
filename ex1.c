//Olá Mundo e explicação do printf e return 0.

#include <stdio.h>
#include <stdlib.h>

int main(){
	
	printf("Hello, World!\n");
	
	return EXIT_SUCCESS; //return 0;
}


/* 
o return 0 eh por conta do tipo da funcao main.
como a funcao eh so tipo int, ela deve retornar um
numero inteiro. O 0 eh uma convencao para retornar
que o programa executou corretamente, caso retorne
outro numero inteiro, significa que ocorreu algum
erro no programa.
o 0 representa a ausencia de falhas, pois o 
sistema operacional possui uma "metrica" da 
gravidade de uma falha detectada pelo sistema
chamada de nivel de erro, um nivel de erro 0
significa que nao houve nenhuma falha, qualquer 
outra coisa, significa que ocorreu uma falha.
no C, existe dois "atalhos" chamados de macros
que tem como objetivo retornar se a execucao falhou
ou nao, no caso, sao constantes globais que sao 
importadas da lib <stdlib.h>
EXIT_SUCCESS = 0
EXIT_FAILURE = 1
o print eh para imprimir conteudo na tela, no caso
exibir para o usuario na tela, o f significa 
formatted, porque eles pegam uma string de formato que 
diz como formatar a saída
*/