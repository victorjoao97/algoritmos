#include <stdio.h>
#include <stdlib.h>

int main()
{
	int idade;
	printf("Digite a idade do atleta: ");
	scanf("%d", &idade);
	if(idade >= 18)
	{
		printf("Categoria Adulto\n");
	}else
	{
		if(idade >= 14)
		{
			printf("Categoria Juvenil B\n");
		}else
		{
			if(idade >= 11)
			{
				printf("Categoria Juvenil A\n");
			}else
			{
				if(idade >= 8)
				{
					printf("Categoria Infantil B\n");
				}else
				{
					if(idade >= 5)
					{
						printf("Categoria Infantil A\n");
					}else
					{
						printf("Fofucho voce nao pode competir");
					}
				}
			}
		}
	}
	return 0;
}