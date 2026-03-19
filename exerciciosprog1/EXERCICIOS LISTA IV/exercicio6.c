#include <stdio.h>

int main()
{
    char G[10], R[10], qtdAcertos, i, j, k;
    
    qtdAcertos = 0;
    
    for(i = 0; i < 10; i++){
        printf("Digite a resposta da questao %d: ", i+1);
        scanf("%s", &G[i]); //tentei fazer sem o & e com %c e nao deu certo
    }
    
    for(j = 0; j < 10; j++){
        printf("Digite a resposta da questao do aluno %d: ", j+1);
        scanf("%s", &R[j]);
    }
    
    for(k = 0; k < 10; k++){
        if(G[k] == R[k]){
            qtdAcertos++;
        }
    }
    
    if(qtdAcertos >= 7){
        printf("%d\n", qtdAcertos);
        printf("APROVADO");
    }
    else{
        printf("%d\n", qtdAcertos);
        printf("REPROVADO");
    }

    return 0;
}