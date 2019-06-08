#include <stdio.h>

int main()
{
	float salario, venda, comissaoVendas, salarioFinal;
	
	salario = 2500.0;
	venda = 10000.0;
	comissaoVendas = (venda * 0.075) - 0.3;
	salarioFinal = salario + comissaoVendas;
	printf("Salario Final %.2f", salarioFinal);
	return 0;
}