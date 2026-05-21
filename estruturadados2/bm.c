#include <stdio.h>
#define TAM_T 100
#define TAM_P 50

int calcularTamanho(char *str);
int bm(char *texto, char *padrao, int *comp);

int main() {
    char t[TAM_T], p[TAM_P];
    int comp = 0;
    int resultado;

    printf("Digite o texto: \n");
    scanf("%s", t);

    printf("Digite o padrao: \n");
    scanf("%s", p);

    // BM
    comp = 0;
    resultado = bm(t, p, &comp);
    if (resultado == -1)
        printf("\nPadrao nao encontrado. Comparacoes: %d\n", comp);
    else
        printf("\nIndice %d. Comparacoes: %d\n", resultado, comp);

}

// Quando ha uma falha na posicao k do texto com o caractere P[j],
// procuramos a ultima ocorrencia do caractere T[k] dentro do padrao
// (excluindo a posicao atual j).
// Se encontrarmos, alinhamos esse caractere do padrao com T[k].
// Se nao encontrarmos, pulamos o padrao inteiro alem de T[k].
//
// A tabela guarda: para cada caractere c, qual a posicao mais a direita
// em que c aparece no padrao (excluindo o ultimo caractere).
// Se nao aparece, guarda -1.


int bm(char *texto, char *padrao, int *comp) {
    int n = calcularTamanho(texto);
    int m = calcularTamanho(padrao);

    // tabela[c] = posicao mais a direita de c no padrao, excluindo posicao m-1
    // Se c nao esta no padrao, tabela[c] = -1
    int tabela[256];

    for (int j = 0; j < 256; j++)
        tabela[j] = -1;

    for (int j = 0; j < m - 1; j++)
        tabela[(unsigned char)padrao[j]] = j;

    int i = 0;

    while (i <= n - m) {
        int k = i + m - 1; // aponta para o fim da janela no texto
        int j = m - 1;     // aponta para o fim do padrao

        while (j >= 0) {
            (*comp)++;
            if (texto[k] != padrao[j])
                break;
            k--;
            j--;
        }

        if (j < 0)
            return i; 

        // Heuristica de ocorrencia:
        // Pega o caractere do texto que causou a falha (texto[k])
        // e verifica sua ultima ocorrencia no padrao (tabela)
        int ocorrencia = tabela[(unsigned char)texto[k]];

        if (ocorrencia < j)
            // Desloca o padrao para alinhar a ocorrencia com texto[k]
            // Se ocorrencia == -1 (nao existe), pula j+1 posicoes
            i += j - ocorrencia;
        else
            // A ocorrencia esta a direita de j, deslocamento minimo de 1
            i += 1;
    }

    return -1;
}

int calcularTamanho(char *str) {
    int tamanho = 0;
    while (str[tamanho] != '\0')
        tamanho++;
    return tamanho;
}