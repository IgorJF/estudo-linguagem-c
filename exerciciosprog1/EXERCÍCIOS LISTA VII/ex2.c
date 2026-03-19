#include <stdio.h>

void impPalavra(char s[], int n);

int main(){

  char palavra[50];
  int n;

  printf("Digite a palavra: ");
  scanf("%s",  palavra);

  printf("Digite o numero: ");
  scanf("%d", &n);

  impPalavra(palavra, n);

  return 0;
}

void impPalavra(char s[], int n){
  if(n > 0){
    printf("%s\n", s);
    impPalavra(s,n-1);
  }
}