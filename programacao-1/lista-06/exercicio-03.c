#include <stdio.h>

#define D1 3

typedef struct Disciplinas{
  char nome[50];
  float nf[D1];
} disciplinas;

typedef struct Aluno{
  char nome[50], matricula[10];
  disciplinas dis[D1];
  float mf;
} aluno;

int main(){

  aluno x[3];
  int i, j, k, op;
  float notat, somat;
  char matriculat[10];

  op = 0;

  for(i = 0;i < D1;i++){
    printf("Digite o nome do aluno [%d]: ", i+1);
    scanf("%s", x[i].nome);
    printf("Digite a matricula do aluno [%d]: ", i+1);
    scanf("%s", x[i].matricula);

    somat = 0;

    for(j = 0;j < D1;j++){
      printf("Digite a nome da disciplina [%d]: ", j+1);
      scanf("%s", x[i].dis[j].nome);

      for(k = 0;k < D1;k++){
        printf("Digite nota [%d] na disciplina nome da disciplina [%d]: ", k+1, j+1);
        scanf("%f", &x[i].dis[j].nf[k]);
        somat = somat + x[i].dis[j].nf[k];
      }
      x[i].mf = somat/D1;
    } 
  }

  while(op != 4){
    printf("O que deseja fazer:\n1 - Listar Alunos\n2 - Listar Alunos por Nota\n3 - Alterar Nota\n4 - Encerrar Programa\n");
    scanf("%d", &op);

    switch(op){
      case 1:
        for(i = 0;i < D1;i++){
          printf("*************\n");
          printf("NOME: %s\n", x[i].nome);
          printf("MATRICULA: %s\n", x[i].matricula);
          printf("MEDIA FINAL: %.2f\n", x[i].mf);
          for(j = 0;j < D1;j++){
            printf("DISCIPLINA [%d]: %s\n", j+1, x[i].dis[j].nome);
            for(k = 0;k < D1; k++){
              printf("NOTA FINAL: %.2f\n", x[i].dis[j].nf[k]);
            }
          }
          printf("*************\n");
        }
        break;
      case 2: 
        printf("Digite a media final desejada: ");
        scanf("%f", &notat);

        for(i = 0;i < D1;i++){
          if(x[i].mf >= notat){
            printf("\n\n");
            printf("NOME: %s\n", x[i].nome);
            printf("MATRICULA: %s\n", x[i].matricula);
            printf("MEDIA FINAL: %.2f\n", x[i].mf);
            for(j = 0;j < D1;j++){
              printf("DISCIPLINA [%d]: %s\n", j+1, x[i].dis[j].nome);
              for(k = 0;k < D1; k++){
                printf("NOTA FINAL: %.2f\n", x[i].dis[j].nf[k]);
              }
            }
            printf("*************\n");
          }
        }
        break;
      case 3:
        printf("Digite a matricula do aluno que deseja buscar: ");
        scanf("%s", matriculat);

        for(i = 0;i < D1;i++){
          if(x[i].matricula >= matriculat){
            for(i = 0;i < D1;i++){
                somat = 0;
                for(j = 0;j < D1;j++){
                    printf("Digite a nova nota [%d] da disciplina %s: ", j +1, x[i].dis[j].nome);
                    for(k = 0;k < D1; k++){
                        scanf("%f", &x[i].dis[j].nf[k]);
                    }
                    x[i].mf = somat/D1;
                }
            }
          }
        }
    }
  }

  return 0;
}