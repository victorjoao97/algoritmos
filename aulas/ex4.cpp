#include <stdio.h>

int main()
{
	int anoNascPessoa, anoAtual, idadeAno, idadeMeses, idadeDias, idadeSemanas;
	anoNascPessoa = 1988;
	anoAtual = 2018;
	
	idadeAno = anoAtual - anoNascPessoa;
	idadeMeses = idadeAno * 12;
	idadeDias = idadeMeses * 30;
	idadeSemanas = idadeDias / 7;
	printf("Idade em anos %d \nIdade em meses %d\nIdade em dias %d\nIdade em semanas %d", idadeAno, idadeMeses, idadeDias, idadeSemanas); 
	return 0;
}