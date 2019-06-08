#include <stdio.h>
#include <stdlib.h>

int main()
{
	float salario, vendas, salarioFinal, comissaoVendas;
	
	printf("Digite o valor do salario");
	scanf("%f", &salario);
	printf("Digite o valor das vendas");
	scanf("%f", &vendas);
	
	comissaoVendas = vendas * 7.5 / 100 - 0.3;
	salarioFinal = comissaoVendas + salario;
	
	printf("Salario final %.2f", salarioFinal);
	return 0;
}