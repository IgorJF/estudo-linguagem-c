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
}

void imprimeTela(int **tela){
  int i, j;
  //Imprime a tela no terminal
  printf(" X|0000000000111111111122222222223333333333444444444455555555556666666666777777777788888888889999999999|\n");
  printf("Y |0123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789|\n");
  printf("--+----------------------------------------------------------------------------------------------------+\n");
  for(i=0; i<nLinha; i++) {
    printf("%2d|", i);
    for(j=0; j<nColuna; j++)
      if(tela[i][j]) printf("*");
      else printf(" ");
    printf("|\n");
  }  printf("--+----------------------------------------------------------------------------------------------------+\n");
}

int main(void) {
  int i, j;
  int x0, x1, y0, y1;
  int **tela;

  tela = criaTela(nColuna, nLinha);

  desenhaLinha(tela, 10, 10, 80, 8);//Oct0
  desenhaLinha(tela, 81, 15, 90, 2);//Oct1
  desenhaLinha(tela, 78, 18, 70, 12);//Oct2
  desenhaLinha(tela, 65, 25, 5, 22);//Oct3
  desenhaLinha(tela, 75, 27, 5, 32);//Oct4
  desenhaLinha(tela, 13, 35, 9, 42);//Oct5
  desenhaLinha(tela, 20, 38, 27, 47);//Oct6
  desenhaLinha(tela, 10, 15, 80, 23);//Oct7
  
  if(tela != NULL)  imprimeTela(tela);
  else printf("Frame não aceito\n");

  return 0;
}