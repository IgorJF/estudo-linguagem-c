#include <stdio.h>
#include "objeto.h"
#include "viewport.h"

#define WIDTH 100
#define HEIGHT 50
#define T 30
#define MAX 10

//entender todo o viewport
//fazer todos os desenhos funcionarem
//conseguir adicionar mais de um arquivo e desenhar
//fazer rotacao, translacao e escala
//controlar trasnformacoes com teclado e mouse
//deletar objeto

int main(){

    Objeto objetos[MAX];
	int qtdObjetos = 0;
    int **tela;
	int opc = 0;
	char nomeArquivo[T];
	
	tela = criaTela(WIDTH, HEIGHT);
	imprimeTela(tela);
	
	do{
		printf("1 - Desenhar Objeto\n2 - Alterar Objeto\n0 - Encerrar Execucao\nDigite o valor da opcao desejada: ");
		scanf("%d", &opc);
		
		if(opc == 1){
			printf("Qual o nome do arquivo do objeto: ");
			scanf("%s", nomeArquivo);
			
			//verifica se cabe mais objetos no vetor de Objetos
			if(qtdObjetos >= MAX){
				printf("Lista cheia!\n");
			}
			else{
				//retorna objeto que fica guardado no vetor e guarda na posicao
				objetos[qtdObjetos] = carregarObjeto(nomeArquivo);
				imprimirObjeto(objetos[qtdObjetos]);
				desenhaObjeto(tela, objetos[qtdObjetos]);

				imprimeTela(tela);
				//itera no final para nao desenhar posicao vazia
				qtdObjetos++;
			}
		}
		else if(opc == 2){
		
		}
		else if(opc == 0){
			printf("Encerrando programa\n");
		}
		else{
			printf("Digite uma opcao valida\n");
		}
		
	}while (opc != 0);

    //casa = carregarObjeto("casaNDC.dcg");
	//triangulo = carregarObjeto("trianguloNDC.dcg");
	//estrela = carregarObjeto("estrelaNDC.dcg");
	
	//imprimirObjeto(casa);
	//imprimirObjeto(triangulo);
	//imprimirObjeto(estrela);

    //desenhaObjeto(tela, casa);
	//desenhaObjeto(tela, triangulo);
	//desenhaObjeto(tela, estrela);

    //imprimeTela(tela);
    //liberarObjeto(casa);
	//liberarObjeto(triangulo);
	//liberarObjeto(estrela);
	
	for(int i = 0; i < qtdObjetos; i++){
		liberarObjeto(objetos[i]);
	}

    return 0;
}
