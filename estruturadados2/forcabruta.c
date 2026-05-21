#include <stdio.h>

#define T 20
#define P 10

int forcaBruta(char *texto, char *padrao);
int calcularTamanho(char *str);

int main()
{
    char t[T], p[P];
    
    printf("Digite o texto: \n");
    scanf("%s", t);
    
    printf("Digite o padrao: \n");
    scanf("%s", p);
    
    printf("Comparacoes: %d\n", forcaBruta(t,p));
    

    return 0;
}

int forcaBruta(char *texto, char *padrao){
    int n = calcularTamanho(texto);
    int m = calcularTamanho(padrao);
    int i, j, comp = 0;;

    for(i = 0; i <= n - m; i++){
        //vai até a ultima posicao possivel onde o padrao pode comecar, por isso depende do 
        //numero de caracteres do padrao, se o texto tiver 10, o padrao tiver 3, ele pode 
        //estar no texto ate o caracter 7 do texto, pois tem que analisar tres posicoes posteriores
        for(j = 0; j < m; j++){
            comp++;
            if(texto[i + j] != padrao[j]){
                break; //o algortimo volta para i
            }
        }
        if(j == m){
            return comp;
        }
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
