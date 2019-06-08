#include <stdio.h>
#include <stdlib.h>

int main()
{
	int idade;
	printf("Digite a idade do atleta: ");
	scanf("%d", &idade);
	switch(idade)
	{
	case 5: case: 6: case 7:
		printf("Categoria Infantil A\n");
		break;
	case 8: case 9: case 10:
		printf("Categoria Infantil B\n");
		break;
	case 11: case 12: case 13:
		printf("Categoria Juvenil A\n");
		break;
	case 14: case 15: case 16: case 17:
		printf("Categoria Juvenil B\n");
		break;
	default:
		if(idade >= 18)
		{
			printf("Categoria adulto\n");
		}else
		{
			printf("Invalido");
		}
		break;
	}
	return 0;
}