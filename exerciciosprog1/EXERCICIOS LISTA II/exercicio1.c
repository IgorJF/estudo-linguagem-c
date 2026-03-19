#include <stdio.h>

int main(){

    float nota1, nota2, nota3, nota4;
    float media;

    printf("Qual a nota 1 do aluno: ");
    scanf("%f", &nota1);
    printf("Qual a nota 2 do aluno: ");
    scanf("%f", &nota2);
    printf("Qual a nota 3 do aluno: ");
    scanf("%f", &nota3);
    printf("Qual a nota 4 do aluno: ");
    scanf("%f", &nota4);

    media = (nota1 + nota2 + nota3 + nota4) / 4;

    printf("As notas do aluno são: %.2f, %.2f, %.2f, %.2f \n", nota1, nota2, nota3, nota4);
    printf("A media do aluno eh %.2f \n", media);

    if (media >= 7) {
        printf("Aprovado \n");
    }
    else {
        printf("Reprovado \n");

    }

    return 0;
}
