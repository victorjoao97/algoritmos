#include <stdio.h>
#include <stdlib.h>

int main()
{
	int idade;
	printf("Digite sua idade\n");
	scanf("%d", &idade);
	
	if(idade >= 16)
	{
		printf("\nEsta pessoa pode votar\n");
	}
	printf("Sua idade e %d anos\n", idade);
	system("pause");
}