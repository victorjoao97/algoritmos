#include<stdio.h>

int main()
{
	int fatorial, numero;
	
	printf("Digite um numero: ");
	scanf("%d", &numero);
	
	for(fatorial = 1; numero > 1; numero--)
	{
	  fatorial *= numero;
	}
	
	printf("\n%d", fatorial);
	
	getchar();
	return 0;
}