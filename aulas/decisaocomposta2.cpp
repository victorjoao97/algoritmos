#include <stdio.h>
#include <stdlib.h>
int main()
{
	int dep;
	float price, priceNew;
	printf("Digite o valor do produto\n");
	scanf("%f", &price);
	printf("Digite o departamento do produto\n");
	scanf("%d", &dep);
	if(dep == 1)
	{
		priceNew = price * 0.05 + price; 
	}
	else
	{
		priceNew = price * 0.074 + price;
	}
	printf("Preco novo produto: %.2f", priceNew);
	return 0;
}