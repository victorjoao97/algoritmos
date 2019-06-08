#include <stdio.h>
int main()
{
	int idade;
	printf("Digite a idade do jogador: ");
	scanf("%d", &idade);
	
	if(idade >= 5)
	{
		if(idade <= 9)
		{
			printf("Infantil");
		}else
		{
			if(idade <= 17)
			{
				printf("Juvenil");
			}else
			{
				printf("Adulto");
			}
		}
	}else
	{
		printf("Voce nao pode jogar");
	}
	return 0;
}