#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define nLinha 50
#define nColuna 100

int **criaTela(int larg, int alt){
	//Na tela, a coordenada x cresce da esquerda para a direita
	//A coordenada y cresce de cima para baixo. A origem fica no canto superior-esquerdo
	int **tela, i, j;
	//Alocando a tela totalmente limpa
	tela = (int **) malloc(alt * sizeof(int *));
	for(i=0; i<alt; i++) {
		tela[i] = (int *) malloc(larg * sizeof(int));
		for(j=0; j<larg; j++) tela[i][j] = 0;
	}
	return tela;
}

void desenhaLinha(int **tela, int x0, int y0, int x1, int y1){
//Desenha a linha partindo das coordenadas (x0, y0) até (x1,y1)
//Para acender um pixel específico é necessário colocar o valor 1 na posição correspondente na matriz tela

	int dx = abs(x1 - x0); 
	int dy = abs(y1 - y0);	
	//vai definir quantos pixels vai andar na tela, eh as distancias entre os pontos de mesma coordenada
	//esta em abs para pegar o valor absoluto apenas
	//em  desenhaLinha(tela, 10, 10, 80, 8); - vai andar 70 pixels horizontal e 2 vertical
	int sx, sy; //para verificar se x e y irao aumentar ou diminuir

	if(x0 < x1) sx = 1;
	else sx = -1;
	//quando x final estiver a direita, aumenta 1, se estiver a esquerda  subtrai 1

	if(y0 < y1) sy = 1;
	else sy = -1;
	//quando y final estiver a mais abaixo, subtrai 1, pois vai descendo, se estiver mais acima aumenta 1, pois vai subindo
	
	int erro = dx - dy; //vai ajudar a determinar se o programa continuara na vertical ou horinzontal em cada passo

	while(1){
		tela[y0][x0] = 1;
		//vai acendendo o pixel em que esta
		if(x0 == x1 && y0 == y1)
			break;
		//verifica se chegou no final, ate x0 e y0 chegarem nos pontos finais

		int e2 = 2 * erro; //convencao para facilitar a comparacao
		//printf("e2: %d\n", e2);

		//conforme o erro vai aumentando ou diminuindo o programa percebe se esta se afastando da reta em relacao a outra coordenada 
		//ou seja, cada passo horizontal acumula desvio(erro), conforme o aumento do desvio - o algoritmo sobe/desce um pixel
		//e vice versa para vertical
		
		if(e2 > -dy){
			erro = erro - dy;
			//printf("errox: %d\n", erro);
			x0 = x0 + sx;
			//vai "andando com x0 ate chegar ao final, aumentando ou diminuindo 1, vai ir ate a condicao de parada (if acima)
		}

		if(e2 < dx){
			erro = erro + dx;
			//printf("erroy: %d\n", erro);
			y0 = y0 + sy;
			//vai "andando com y0 ate chegar ao final, aumentando ou diminuindo 1, vai ir ate a condicao de parada (if acima)
		}
	}
}

void imprimeTela(int **tela){
	int i, j;
	//Imprime a tela no terminal
	printf(" X|0000000000111111111122222222223333333333444444444455555555556666666666777777777788888888889999999999|\n");
	printf("Y |0123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789|\n");
	printf("--+----------------------------------------------------------------------------------------------------+\n");
	for(i=0; i<nLinha; i++) {
		printf("%2d|", i);
		for(j=0; j<nColuna; j++) {
			if(tela[i][j]) {
				printf("*");
			}
			else {
				printf(" ");
			}
		}
		printf("|\n");
	}
    
	printf("--+----------------------------------------------------------------------------------------------------+\n");
}

int main(void) {
	int i, j;
	int x0, x1, y0, y1;
	int **tela;

	tela = criaTela(nColuna, nLinha);
	
	desenhaLinha(tela, 2, 2, 5, 12);
	//desenhaLinha(tela, 10, 10, 80, 8);//Oct0
	//desenhaLinha(tela, 81, 15, 90, 2);//Oct1
	//desenhaLinha(tela, 78, 18, 70, 12);//Oct2
	//desenhaLinha(tela, 65, 25, 5, 22);//Oct3
	//desenhaLinha(tela, 75, 27, 5, 32);//Oct4
	//desenhaLinha(tela, 13, 35, 9, 42);//Oct5
	//desenhaLinha(tela, 20, 38, 27, 47);//Oct6
	//desenhaLinha(tela, 10, 15, 80, 23);//Oct7
  
	if(tela != NULL)  imprimeTela(tela);
	else printf("Frame não aceito\n");

	return 0;
}