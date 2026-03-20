#include <stdio.h>

#define TAM 10
#define C1 3
#define C2 6
#define C3 9

int estado = 1; 
//qualquer numero funcionaria aqui, mas pode travar o gerador caso seja 0 e a depender da formula 
//e caso nao seja inicializado, pode dar resultados imprevisiveis por conta do lixo de memoria

void definir_semente(int numero);
int gerar_numero();

int main() {

    int V[] = {C1,C2,C3}, A[TAM], i, j, semente;
	
	printf("Digite a semente: \n");
	scanf("%d", &semente);
	
	definir_semente(semente);
	
	printf("\n\n");
	
	for(i = 0; i < TAM; i++){
		A[i] = gerar_numero() % 10; //qualquer numero dividido por 10, sempre sera entre 0 e 9
	}
	
	printf("\n\n");
	
	for(i = 0; i < TAM; i++){
		printf("%d, ", A[i]);
	}
	
	printf("\n\n");
	
	for(i = 0;i < 3;i++){
		for(j = 0;j < TAM;j++){
			if(V[i] == A[j])
				printf("%d encontrado na posicao %d do vetor A\n", V[i], j);
		}
	}	
    
    return 0;
}

/*computador nao consegue gerar numeros aleatorios, precisa de instrucao
com calculos geramos sequencias de numeros que vao parecer aleatorios
mas esses numeros são calculados, porem a sequencia começa de algum lugar
esse lugar inicial é chamado de semente, a semente sempre irá gerar a mesma
sequencia a depender de como foi feito o calculo

caso fosse utilizado:
#include <stdlib.h> // Para rand() e srand()
#include <time.h>   // Para time()
srand(time(NULL)); //Define a semente (ponto de partida da sequencia)
rand() //aplica uma formula interna entre zero e RAND_MAX
time() //serve para mudar a semente a cada segundo, pois é uma funcao que 
conta segundos reais e muda a todo instante

estado * 1103515245 + 12345
% 32768 = 2^15

são valores que a lib padrao do c utiliza, sao valores ja calculados e testados
que apresentam boa distribuicao de valores que irao gerar

a implementação mais clássica usa um Gerador Linear Congruencial (LCG), com a fórmula:
X(n+1) = (a * X(n) + c) mod m

Segmentation Fault = programa tenta acessar memoria que nao pertence a ele
*/

void definir_semente(int numero){
	estado = numero;
}

int gerar_numero(){
	printf("Estado antes: %d\n", estado);
	
	estado = estado * 1103515245 + 12345;
	
	printf("Estado formula: %d\n", estado);
	
	if(estado < 0){ 
	// necessario pois o limite do int eh -2147483648  até  +2147483647, caso o numero da formula
	//retorne algo maior que isso, ele fara o modulo da divisao com o MAX do int (4294967296 - do extremo ao outro numero de valores no circulo do int)
	//o modulo vai nos dizer quantas vezes o numero passou do maximo, no caso 2147483647, ao dividir por 4294967296, descobriremos quantas voltas inteiras
	//o numero deu em todo ciclo de -2147483648  até  +2147483647, o restante da divisao, ai depois subtraimos ou somamos para saber quando
	//o resto da divisao dara sua propria volta, e acharemos o numero equivalente em posicao, como o resto é menor que o MAX e o numero ja tinha dado voltas
	//o resto comecara a partir de 0 e ira ate o seu valor que falta
	//o nome disso eh overflow
		estado = estado * -1;
		printf("Estado apos correcao: %d\n", estado);
	}
	
	printf("Estado final: %d\n\n", estado % 32768);
	
	return estado % 32768;
}

