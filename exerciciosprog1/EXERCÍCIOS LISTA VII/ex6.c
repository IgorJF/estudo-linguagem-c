#include <stdio.h>

void troca(int *x, int *y);

int main(){

  int x, y;
  
  printf("Digite dois numeros: ");
  scanf("%d %d", &x, &y);

  printf("X: %d\n", x);
  printf("Y: %d\n\n", y);

  troca(&x, &y);

  printf("X: %d\n", x);
  printf("Y: %d\n", y);

  return 0;
}

void troca(int *x, int *y){
  int aux;
  aux = *x;
  *x = *y;
  *y = aux;
}