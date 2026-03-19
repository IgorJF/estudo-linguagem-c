#include <stdio.h>

float cubo(float a);

int main(){

  int n;

  printf("Digite um numero: ");
  scanf("%d", &n);

  printf("%d ao cubo eh %.2f", n, cubo(n));

  return 0;
}

float cubo(float a){
  return a*a*a;
}