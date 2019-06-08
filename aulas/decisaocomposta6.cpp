#include <stdio.h>
#include <stdlib.h>
int main()
{
	int codDepto;
	float precoProduto, precoNovo, aumento;
	printf("Digite o preco do produto: ");
	scanf("%f", &precoProduto);
	printf("\nDigite o departamento do produto: ");
	scanf("%d", &codDepto);
	if(codDepto == 1)
	{
		aumento = precoProduto * 0.05;
	}
	else
	{
		aumento = precoProduto * 0.074;
	}
	precoNovo = precoProduto + aumento;
	printf("Preco produto: R$ %.2f Aumento: R$ %.2f Preco Novo: R$ %.2f\n", precoProduto, aumento, precoNovo);
	system("pause");
	return 0;
}