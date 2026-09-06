#include <stdio.h>

#define D 10

typedef struct Contato {
	char nome[20], email[50], telefone[15];

} contato;

int main(){
	
	contato c[D];
	int i = 0, opc, j = 1, k, totalContatos = 0;;

	do{
		
		printf("Digite o nome do contato %d: ", j);
		scanf("%s", c[i].nome);

		printf("Digite o email do contato %d: ", j);
		scanf("%s", c[i].email);

		printf("Digite o telefone do contato %d: ", j);
		scanf("%s", c[i].telefone);

		printf("Deseja adicionar um contato a lista:\n 1 - SIM\n 0 - NAO\n");
		scanf("%d", &opc);

		if (opc == 1 && i < D - 1) {
    			i++;
    			j++;
		} 
		else {
			printf("Nao eh possivel adicionar mais contatos\n");
    			break;
		}

	} while(opc);

	totalContatos = j;
	
	printf("**********LISTA DE CONTATOS***********\n");
	
	for(k = 0;k < totalContatos;k++){
		printf("Contato [%d]\nNome: %s\nEmail: %s\nTelefone: %s\n", k+1, c[k].nome, c[k].email, c[k].telefone);
		printf("**************************************\n");
	}
	
	return 0;
}