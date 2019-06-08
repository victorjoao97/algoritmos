#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	float salario, comissao, salarioFinal;
	
	salario = 2300.00;
	comissao = salario * 0.04;
	salarioFinal = salario + comissao;
	
	printf("Salário R$ %.2f \n Comissão R$ %.2f \n Salário Final R$ %.2f", salario, comissao, salarioFinal);
	return 0;
}