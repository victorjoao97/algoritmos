#include <stdio.h>
#include <stdlib.h>

int main()
{
	int anoNascimento, anoAtual, idadeAnos, idadeMeses, idadeDias, idadeSemanas;
	
	printf("Digite seu ano de nascimento\n");
	scanf("%d", &anoNascimento);
	printf("Digite o ano atual\n");
	scanf("%d", &anoAtual);
	
	idadeAnos = anoAtual - anoNascimento;
	idadeMeses = idadeAnos * 12;
	idadeDias = idadeAnos * 365;
	idadeSemanas = idadeDias / 7;
	
	printf("Idade em anos %d\nIdade em meses %d\nIdade em dias %d\nIdade em semanas %d\n", idadeAnos, idadeMeses, idadeDias, idadeSemanas);
	system("pause");
	return 0;
}