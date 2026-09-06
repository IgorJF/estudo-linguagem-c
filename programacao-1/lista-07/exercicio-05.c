#include <stdio.h>

void recebeNum(float *a, float *b, float *c);
float dobro(float n);

int main(){

  float num1, num2, num3;

  printf("Digite tres numeros: ");
  scanf("%f %f %f", &num1, &num2, &num3);

  recebeNum(&num1, &num2, &num3);

  printf("%.2f\n", num1);
  printf("%.2f\n", num2);
  printf("%.2f\n", num3);

  return 0;
}

void recebeNum(float *a, float *b, float *c){
  *a = dobro(*a);
  *b = dobro(*b);
  *c = dobro(*c);
}

float dobro(float n){
  return 2*n;
}


/*
#include <stdio.h>

void recebeNum(float *a, float *b, float *c);
float dobro(float n);

int main(){

  float num1, num2, num3;

  recebeNum(&num1, &num2, &num3);

  printf("%.2f\n", dobro(num1));
  printf("%.2f\n", dobro(num2));
  printf("%.2f\n", dobro(num3));

  return 0;
}

void recebeNum(float *a, float *b, float *c){
  printf("Digite tres numeros: ");
  scanf("%f %f %f", a, b, c);  
}

float dobro(float n){
  return 2*n;
}
*/


