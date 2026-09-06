//ANA LUIZA GONÇALVES DE SOUZA
//IGOR JORGE FERRAZ

#include <stdio.h>
#include <math.h>
#include "objeto.h"
#include "viewport.h"

#define PI 3.14159265
#define WIDTH 100
#define HEIGHT 50
#define T 30
#define MAX 10

void listarObjetos(Objeto objetos[], int tam);

int main(){

    Objeto objetos[MAX];
	int qtdObjetos = 0;
    int **tela;
	int opc = 0;
	char nomeArquivo[T];
	
	tela = criaTela(WIDTH, HEIGHT);
	imprimeTela(tela);
	
	do{
		printf("1 - Desenhar Objeto\n2 - Alterar Objeto\n3 - Excluir Objeto\n4 - Listar Objetos\n0 - Encerrar Execucao\nDigite o valor da opcao desejada: ");
		scanf("%d", &opc);
		
		if(opc == 1){
			float escala, angulo;
            int posX, posY;
			
			printf("Qual o nome do arquivo do objeto: ");
			scanf("%s", nomeArquivo);
			
			
			//verifica se cabe mais objetos no vetor de Objetos
			if(qtdObjetos >= MAX){
				printf("Lista cheia!\n");
			}
			else{
				//posicoes iniciais do objeto
				printf("Digite a posicao X (0 a %d): ", WIDTH - 1);
                scanf("%d", &posX);
                
                printf("Digite a posicao Y (0 a %d): ", HEIGHT - 1);
                scanf("%d", &posY);
                
                printf("Digite a escala (1 = tamanho padrao) ");
                scanf("%f", &escala);
                
                printf("Digite a rotacao em graus (0 a 360): ");
                scanf("%f", &angulo);
				
				//retorna objeto que fica guardado no vetor e guarda na posicao
				objetos[qtdObjetos] = carregarObjeto(nomeArquivo);
				
				//converter o angulo em graus para radiano
				float rad = angulo*(PI/180.0);
                
				//transformar as coordenadas digitadas pelo usuario(foram com base na tela) em NDC, normalizar no caso, que vai ir de -1 a 1
                float tx = (2.0 * posX/WIDTH) - 1.0;
                float ty = 1.0 - (2.0 * posY/HEIGHT);
				
				for(int i = 0; i < objetos[qtdObjetos].qtdVertices; i++){
                    float x0 = objetos[qtdObjetos].vertices[i].x;
                    float y0 = objetos[qtdObjetos].vertices[i].y;

                    //escala - aumentar o objeto em relacao a origem
                    float xs = x0 * escala;
                    float ys = y0 * escala;

                    //rotacao - matriz padrao de rotcao 2d
                    float xr = xs * cos(rad) - ys * sin(rad);
                    float yr = xs * sin(rad) + ys * cos(rad);

                    //translacao - somar todos os vertices do objeto com essa constante calculada de deslocamento, para todos os pontos deslizarem juntos
                    objetos[qtdObjetos].vertices[i].x = xr + tx;
                    objetos[qtdObjetos].vertices[i].y = yr + ty;
				}
				
				//imprimirObjeto(objetos[qtdObjetos]);
				desenhaObjeto(tela, objetos[qtdObjetos]);

				imprimeTela(tela);
				//itera no final para nao desenhar posicao vazia
				qtdObjetos++;
			}
		}
		else if(opc == 2){
			int opcAlterar;
			float novaEscala, novoAngulo;
			int novoPosX, novoPosY;
			
			listarObjetos(objetos, qtdObjetos);
			printf("Digite o numero do objeto que deseja alterar:\n");
			
			scanf("%d", &opcAlterar);
			
			if(opcAlterar >= 0 && opcAlterar < qtdObjetos){
				//digitar as novas medidas
				printf("Digite a nova posicao X (0 a %d): ", WIDTH - 1);
				scanf("%d", &novoPosX);
        
				printf("Digite a nova posicao Y (0 a %d): ", HEIGHT - 1);
				scanf("%d", &novoPosY);
				
				printf("Digite a nova escala (1 = tamanho padrao): ");
				scanf("%f", &novaEscala);
				
				printf("Digite a nova rotacao em graus (0 a 360): ");
				scanf("%f", &novoAngulo);

				//limpar os vertices antigos e recarregar os originais do arquivo
				liberarObjeto(objetos[opcAlterar]); 
				objetos[opcAlterar] = carregarObjeto(objetos[opcAlterar].nome);

				//preparar as variaveis novamente para desenhar
				float rad = novoAngulo * (PI/180.0);
				float tx = (2.0 * novoPosX/WIDTH) - 1.0;
				float ty = 1.0 - (2.0 * novoPosY/HEIGHT);

				for(int i = 0; i < objetos[opcAlterar].qtdVertices; i++){
					float x0 = objetos[opcAlterar].vertices[i].x;
					float y0 = objetos[opcAlterar].vertices[i].y;

					float xs = x0 * novaEscala;
					float ys = y0 * novaEscala;

					float xr = xs * cos(rad) - ys * sin(rad);
					float yr = xs * sin(rad) + ys * cos(rad);

					objetos[opcAlterar].vertices[i].x = xr + tx;
					objetos[opcAlterar].vertices[i].y = yr + ty;
				}

				//limpar tela
				for(int i = 0; i < HEIGHT; i++) {
					for(int j = 0; j < WIDTH; j++){
						tela[i][j] = 0;
					}
				}
				
				//redesenhar objetos
				for(int i = 0; i < qtdObjetos; i++){
					desenhaObjeto(tela, objetos[i]);
				}

				imprimeTela(tela);
				printf("Objeto %d alterado com sucesso!\n", opcAlterar);
			} 
			else{
				printf("Opcao invalida!\n");
			}
		}
		else if(opc == 3){
			
			int opcExcluir = 0;
			
			if(opcExcluir >= 0 && opcExcluir < qtdObjetos) {	
				listarObjetos(objetos, qtdObjetos);
				printf("Digite o numero do objeto que deseja excluir:\n");
				scanf("%d", &opcExcluir);
				
				//liberar objeto da memoria
				liberarObjeto(objetos[opcExcluir]);
				
				//mudar a lista do vetor para realocar as posicoes
				for (int i = opcExcluir; i < qtdObjetos; i++) {
					objetos[i] = objetos[i + 1];
				}
				
				//reduz em -1 a posicao
				qtdObjetos--;
				
				//zerar a tela, tirando os pixels em 1
				for(int i = 0; i < HEIGHT; i++) {
					for(int j = 0; j < WIDTH; j++) {
						tela[i][j] = 0;
					}
				}
				
				//redesenhar os objetos
				for(int i = 0; i < qtdObjetos; i++){
					desenhaObjeto(tela, objetos[i]);
				}
			
				imprimeTela(tela);
				printf("Objeto %d excluido com sucesso!\n", opcExcluir);
			} 
			else{
				printf("Opcao invalida!\n");
			}
		}
		else if(opc == 4){
			printf("Lista de Objetos\n");
			listarObjetos(objetos, qtdObjetos);
			
		}
		else if(opc == 0){
			printf("Encerrando programa\n");
		}
		else{
			printf("Digite uma opcao valida\n");
		}
		
	}while (opc != 0);
	
	for(int i = 0; i < qtdObjetos; i++){
		liberarObjeto(objetos[i]);
	}

    return 0;
}

void listarObjetos(Objeto objetos[], int tam){
	for(int i = 0;i < tam;i++){
		printf("Objeto %d: %s\n", i, objetos[i].nome);
	}
}
