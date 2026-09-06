#include <stdio.h>

#define T 100
#define P 50

void preProcessamento(char *padrao, int m, int aux[]);
int kmp(char *texto, char *padrao, int *comp);
int calcularTamanho(char *str);

int main()
{
    char t[T], p[P];
	int comparacoes = 0, indice;
    
    printf("Digite o texto: \n");
    scanf("%s", t);
    
    printf("Digite o padrao: \n");
    scanf("%s", p);
	
	indice = kmp(t,p,&comparacoes);
    
    printf("Indice: %d\nComparações: %d\n", indice,comparacoes);
    

    return 0;
}

void preProcessamento(char *padrao, int m, int aux[]){ //m = n caracteres do padrao
	int i = 1;
	int j = -1;
	aux[0] = -1; //nao eh necessaria comparar a posicao 0 com nada inicialmente
	
	for(i = 1;i < m;i++){
		while(j > -1 && padrao[j+1] != padrao[i]){
			j = aux[j];
		}
		if(padrao[i] == padrao[j+1]) j++;
		aux[i] = j;
	}
}

int kmp(char *texto, char *padrao, int *comp){
    int n = calcularTamanho(texto);
    int m = calcularTamanho(padrao);
	int aux[m];
	preProcessamento(padrao,m,aux);
    int i = 0, j = -1;
	*comp = 0;

    while(i < n){
		(*comp)++;
        while(j > -1 && padrao[j + 1] != texto[i]){
			j = aux[j];
			(*comp)++;
		}
		if(texto[i] == padrao[j+1]){
			j++;
		}
		if(j == m-1){
			return i-m+1;
		}
		i++;
    }

    return -1;
}

int calcularTamanho(char *str){
    int tamanho = 0;
    
    while (str[tamanho] != '\0') {
        tamanho++;
    }
    
    return tamanho;
}
