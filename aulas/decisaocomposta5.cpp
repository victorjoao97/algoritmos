#include <stdio.h>
#include <stdlib.h>
int main()
{
	int num1, num2;
	printf("Digite um numero: ");
	scanf("%d", &num1);
	printf("\nDigite outro numero: ");
	scanf("%d", &num2);
	if(num1 < num2)
	{
		printf("Ordem Crescente: %d, %d\n", num1, num2);
	}
	else
	{
		printf("Ordem Crescente: %d, %d\n", num2, num1);
	}
	system("pause");
	return 0;
}