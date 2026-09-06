#include <stdio.h>

int main() {

	int anoNascimento, anoAtual;
	int idadeAnos, idadeMeses, idadeSemanas, idadeDias;
	
	printf("Digite o ano de nascimento da pessoa: ");
	scanf("%d", &anoNascimento);
	printf("Digite o ano atual: ");
	scanf("%d", &anoAtual);
	
	idadeAnos = anoAtual - anoNascimento;
	idadeMeses = idadeAnos * 12;
	idadeSemanas = idadeAnos * 52;
	idadeDias = idadeAnos * 365;
	
	printf("A pessoa que nasceu em %d em %d, possui %d anos de vida, %d meses de vida, %d semanas de vida e %d dias de vida", anoNascimento, anoAtual, idadeAnos, idadeMeses, idadeSemanas, idadeDias);

	return 0;
}

