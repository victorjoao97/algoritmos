#include <stdio.h>
#include <stdlib.h>
int main()
{
	int idade;
	printf("Digite sua idade: ");
	scanf("%d", &idade);
	
	if(idade >= 5 && idade <= 7)
	{
		printf("Categoria - Infantil A\n");
	}else
	{
		if(idade >= 8 && idade <= 10)
		{
			printf("Categoria - Infantil B\n");
		}else
		{
			if(idade >= 11 && idade <= 13)
			{
				printf("Categoria - Juvenil A\n");
			}else
			{
				if(idade >= 14 && idade <= 17)
				{
					printf("Categoria - Juvenil B\n");
				}else
				{
					if(idade >= 18)
					{
						printf("Categoria - Adulto\n");
					}else
					{
						printf("Voce nao pode competir\n");
					}
				}
			}
		}
	}
	return 0;
}