#include <stdio.h>

#define D1 3

typedef struct Candidato{
    int numInscricao, idade;
    char nome[50], experiencia[1], sexo[1];
} candidato;

int main(){

    candidato x[D1];
    int i, numM, numH, idadeMHE, numMHE, numHV, numMN, menorE;

    numM = 0;
    numH = 0;
    idadeMHE = 0;
    numMHE = 0;
    numHV = 0;
    numMN = 0;

    for(i = 0;i < D1;i++){
        printf("Digite o numero de inscricao do candidato [%d]: ", i+1);
        scanf("%d", &x[i].numInscricao);
        printf("Digite o nome do candidato [%d]: ", i+1);
        scanf("%s", x[i].nome);
        printf("Digite a idade do candidato [%d]: ", i+1);
        scanf("%d", &x[i].idade);
        printf("Digite o genero (M ou F) do candidato [%d]: ", i+1);
        scanf("%s", x[i].sexo);
        printf("Digite a a experiencia (S ou N) do candidato [%d]: ", i+1);
        scanf("%s", x[i].experiencia);

        if(x[i].sexo == "F"){
            numM++;
        }
        if(x[i].sexo == "M"){
            numH++;
        }
        if(x[i].sexo == "M" && x[i].experiencia == "S"){
            idadeMHE = x[i].idade + idadeMHE; 
            numMHE++;
        }
        if(x[i].sexo >= "M" && x[i].idade >= 45){
            numHV++;
        }
        if(x[i].sexo >= "F" && x[i].idade <= 35 && x[i].experiencia == "S"){
            numMN++;
        }
        if(x[i].sexo >= "F" && x[i].experiencia == "S"){
            if(menorE == 0){
                menorE = x[i].idade;
            }
            else if (menorE > x[i].idade){
                menorE = x[i].idade;
            }
        }

    }


    printf("O numero de candidatos do sexo feminino eh: %d", numM);
    printf("O numero de candidatos do sexo masculino eh: %d", numH);
    printf("Idade media dos homens com experiencia: %.2f", (idadeMHE*1.0)/numMHE);
    printf("O numero de homens mais 45: %.2f %", ((numHV*1.0)/numH)*100 );
    printf("Mulheres menos de 35 com experiencia: %d", numMN);
    printf("Mulher com a idade mais nova dentre e com experiencia %d", menorE);

    return 0;
}