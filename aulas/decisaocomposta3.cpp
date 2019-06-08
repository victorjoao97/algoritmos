#include <stdio.h>
#include <stdlib.h>
int main()
{
	int anoNasc, anoAtual, idade;
	printf("Digite o seu ano de nascimento: ");
	scanf("%d", &anoNasc);
	printf("\nDigite ano atual: ");
	scanf("%d", &anoAtual);
	idade = anoAtual - anoNasc;
	printf("\nIdade: %d", idade);
	if(idade >= 16)
	{
		printf("\nVoce pode votar!\n");
	}
	else
	{
		printf("\nVoce nao pode votar\n");
	}
	system("pause");
	return 0;
}