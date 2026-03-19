#include <stdio.h>
#include <string.h>

void dna(char *strDna, const char *strGene) {
    char *pos = strstr(strDna, strGene);//strstr procura uma substring dentro de uma string;
    //o pos é um ponteiro e se o strGene for encontrado dentro de strDna, alem de guardar toda
    //a sequencia de DNA, vai guardar a partir de onde strGene esta,
    //ex: ACGTAT, GT, vai guardar a partir de GTAT, se não encontrar nada, retornar NULL
    while (pos) {//enquanto pos for diferente de null vai continuar procurando
        for (size_t i = 0; i < strlen(strGene); i++)//declaramos i como size_t por que colocar como int
        //pode dar problema depois, se a sequencia for muito grande, mas funcionaria normalmente se fosse como int 
        //ve pelo tamanho do gene com strlen
        //e assim ve quantos caracteres devem ser substituidos
            pos[i] = 'X';  // quando achar vai substituir, e então a sequencia ira mudar, ou seja
            //nao tera mais aquelas posicoes com os digitos do gene, por que foram trocadas para XX

        }

        pos = strstr(pos + 1, strGene);  //agora vai comecar a procurar novamente uma posicao depois
        //da onde o primeiro correspondente foi encontrado, então na funcao strstr, ele vai procurar
        //por strGene dentro do ponteiro que "restou"
    }
}

int main() {
    char sequencia[50], gene[10];
    printf("Digite a sequência de DNA: ");
    fgets(sequencia, sizeof(sequencia), stdin);//stdin é para representar a entrada
    //padrao de dados, no caso o teclado, sizeof retorna a quantidade de bytes da string
    //nesse caso 50, pois sequencia[50], fgets é para ler string
    sequencia[strcspn(sequencia, "\n")] = '\0';
    //quando lemos uma string, o \n é armazenado indicando o final da string, nessa função acima
    //substituimos o \n por \0, para indicar o final da string com \0, isso é feito, pois
    //no caso strcspn, encontra o primeiro \n, pegamos a posicao e substituimos por \0
    // fazemos isso, pois o \n pode causar problemas depois

    printf("Qual o gene você quer substituir: ");
    fgets(gene, sizeof(gene), stdin);
    gene[strcspn(gene, "\n")] = '\0'; 

    dna(sequencia, gene);
    printf("Sequência modificada: %s\n", sequencia);

    return 0;
}
/*

#include <stallb.n>
void substituirGene (char strDna[], char strGene [])

int i;
//percorrendo a string
for (i=0; strDna[i] != '\o'; i++) {
//sa tiver alouma nosicao na string que seia = 0 e 1 da string
//Gene (0= C 1 = T
if (strDna[i] == strGene [0] && strDna[i+1] == strGene [1]) {
strDna[i] = 'x'; //troca a posicao por X
strDna [i+1] = 'X'; //txoca a proxima pom

}

int main ()

char dna [] = "AAGCTTAACGGCT";
char gene [] = "CT";

substituirGene (dna, gene) ;
printf ("$s\n", dna);
return 0;

strstr(str1, str2)	Procura str2 dentro de str1. Retorna um ponteiro para a posição encontrada ou NULL.
char *pos = strstr(strDna, strGene);	Armazena o ponteiro da posição onde strGene aparece em strDna.
fgets(variavel, tam, stdin);	Lê uma string do teclado.
sizeof(variavel)	Retorna o tamanho da variável em bytes.
stdin	Representa a entrada padrão (teclado).
strcspn(str, "\n")	Encontra a posição do \n na string e pode ser usado para removê-lo.
*/
