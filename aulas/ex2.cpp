#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	float salario, comissao, salarioFinal;
	
	salario = 2300.00;
	comissao = salario * 0.04;
	salarioFinal = salario + comissao;
	
	printf("Sal�rio R$ %.2f \n Comiss�o R$ %.2f \n Sal�rio Final R$ %.2f", salario, comissao, salarioFinal);
	return 0;
}