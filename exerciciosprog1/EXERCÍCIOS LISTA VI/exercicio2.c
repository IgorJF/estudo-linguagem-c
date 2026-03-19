#include <stdio.h>

#define QTDCARROS 5

typedef struct Carro {
  char marca[50], modelo[50], cor[50];
  int ano;
  float preco;
} carro;

int main() {

  int i;
  carro x[QTDCARROS];

  for (i = 0; i < QTDCARROS; i++) {
    printf("Digite a modelo do carro [%d]: ", i + 1);
    scanf("%s", x[i].modelo);
    printf("Digite a marca do carro [%d]: ", i + 1);
    scanf("%s", x[i].marca);
    printf("Digite a cor do carro [%d]: ", i + 1);
    scanf("%s", x[i].cor);
    printf("Digite o ano do carro [%d]: ", i + 1);
    scanf("%d", &x[i].ano);
    printf("Digite o preco do carro [%d]: ", i + 1);
    scanf("%f", &x[i].preco);
  }

  for (i = 0; i < QTDCARROS; i++) {
    if (x[i].preco <= 20000.00) {
      printf("-------------------------\n");
      printf("Modelo: %s\n", x[i].modelo);
      printf("Marca: %s\n", x[i].marca);
      printf("Cor: %s\n", x[i].cor);
      printf("Ano: %d\n", x[i].ano);
      printf("Preco: %.2f\n", x[i].preco);
      printf("-------------------------\n");
      printf("\n");
    }
  }

  return 0;
}