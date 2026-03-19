#include <stdio.h>

void exibirNome();

int main() {

  exibirNome();

  return 0;
}

void exibirNome(){
  char nome[50];
  printf("Digite seu nome: ");
  scanf("%s", nome);
  printf("%s", nome);
}


/*Mazinho  
#include <stdio.h>

void exibirNome(char n[]);

int main(void) {

  char nome[50];
  printf("Digite seu nome: ");
  scanf("%s", nome);
  exibirNome(nome);

  return 0;
}

void exibirNome(char n[]){
  printf("%s",n);
}
*/