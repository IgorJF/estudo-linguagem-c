#include <stdio.h>
#include <string.h>

void dna(char *strDna, const char *strGene) {
    char *pos = strstr(strDna, strGene);//strstr procura uma substring dentro de uma string;
    //o pos é um ponteiro e se o strGene for encontrado dentro de strDna, alem de guardar toda
    //a sequencia de DNA, vai guardar a partir de onde strGene esta,
    //ex: ACGTAT, GT, vai guardar a partir de GTAT, se não encontrar nada, retornar NULL
    if (pos) {//enquanto pos for diferente de null vai continuar procurando
        size_t lenGene = strlen(strGene);//strlen retorna o numero de caractres da string sem contar o \0
        memmove(pos, pos + lenGene, strlen(pos + lenGene) + 1);
    }
}

int main() {
    char sequencia[50];
    printf("Digite a sequência de DNA: ");
    fgets(sequencia, sizeof(sequencia), stdin);//stdin é para representar a entrada
    //padrao de dados, no caso o teclado, sizeof retorna a quantidade de bytes da string
    //nesse caso 50, pois sequencia[50], fgets é para ler string
    sequencia[strcspn(sequencia, "\n")] = '\0';
    //quando lemos uma string, o \n é armazenado indicando o final da string, nessa função acima
    //substituimos o \n por \0, para indicar o final da string com \0, isso é feito, pois
    //no caso strcspn, encontra o primeiro \n, pegamos a posicao e substituimos por \0
    // fazemos isso, pois o \n pode causar problemas depois

    dna(sequencia, "AG");
    printf("Sequência modificada: %s\n", sequencia);

    return 0;
}


/*
strstr(str1, str2)	Procura str2 dentro de str1. Retorna um ponteiro para a posição encontrada ou NULL.
char *pos = strstr(strDna, strGene);	Armazena o ponteiro da posição onde strGene aparece em strDna.
fgets(variavel, tam, stdin);	Lê uma string do teclado.
sizeof(variavel)	Retorna o tamanho da variável em bytes.
stdin	Representa a entrada padrão (teclado).
strcspn(str, "\n")	Encontra a posição do \n na string e pode ser usado para removê-lo.
*/