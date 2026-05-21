#include <stdio.h>
#define TAM_T 100
#define TAM_P 50

int calcularTamanho(char *str);
int bmh(char *texto, char *padrao, int *comp);

int main() {
    char t[TAM_T], p[TAM_P];
    int comp = 0;
    int resultado;

    printf("Digite o texto: \n");
    scanf("%s", t);

    printf("Digite o padrao: \n");
    scanf("%s", p);

    comp = 0;
    resultado = bmh(t, p, &comp);
    if (resultado == -1)
        printf("Padrao nao encontrado. Comparacoes: %d\n", comp);
    else
        printf("Indice %d. Comparacoes: %d\n", resultado, comp);

    return 0;
}

int bmh(char *texto, char *padrao, int *comp) {
    int n = calcularTamanho(texto);
    int m = calcularTamanho(padrao);

    // para j=0 ate 255: tabela[j] = m
    // para j=1 ate m-1: tabela[P[j-1]] = m - j

    int tabela[256];

    for (int j = 0; j < 256; j++)
        tabela[j] = m;

    for (int j = 0; j < m - 1; j++)
        tabela[(unsigned char)padrao[j]] = m - 1 - j;

    int i = m;

    while (i <= n) {
        int k = i;     // k percorre o texto da direita para esquerda
        int j = m;     // j percorre o padrao da direita para esquerda

        while (j > 0) {
            (*comp)++;
            if (texto[k - 1] != padrao[j - 1])
                break;
            k--;
            j--;
        }

        if (j == 0)
            return k; 

        i += tabela[(unsigned char)texto[i - 1]];
    }

    return -1;
}

int calcularTamanho(char *str) {
    int tamanho = 0;
    while (str[tamanho] != '\0')
        tamanho++;
    return tamanho;
}