#include <stdio.h>

float dobro(float n);

int main(){

  float num;

  printf("Digite um numero: ");
  scanf("%f", &num);

  dobro(num);

  printf("O dobro de %.2f eh %.2f", num, dobro(num));


  return 0;
}

float dobro(float n){
  return 2*n;
}