#include <stdio.h>

int main() {

    float nota1, nota2, media;

    printf("Digite a nota1: ");
    scanf("%f", &nota1);
    printf("Digite a nota2: ");
    scanf("%f", &nota2);

    media = (nota1 + nota2) / 2;

    printf("As notas do aluno sao: %.2f e %.2f \n", nota1, nota2);
    printf("A media do aluno eh: %.2f \n", media);

    if(media < 4.0) {
        printf("Reprovado \n");
    }
    else if (media < 7.0) {
        printf("Exame \n");
    }
    else if (media < 10.0) {
        printf("Aprovado \n");

    }
    else {
        printf("Voce digitou alguma nota errado \n");

    }

    return 0;
}



