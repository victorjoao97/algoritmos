#include <stdio.h>
#include <stdlib.h>

int main()
{
	int num, resto;
	printf("\nDigite um numero inteiro\n");
	scanf("%d",&num);
	
	resto = num % 3;
	
	if(resto == 0)
	{
		printf("\n%d e multiplo de 3", num);
	}
	
	printf("\n\nPrecisamos de uma CHUVA urgentemente\n\n");
	system("pause");
	return 0;
}