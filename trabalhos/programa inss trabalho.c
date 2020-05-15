#include <stdio.h>
#include <stdlib.h>
int main()
{
	float sal_bruto, sal_final, val_inss;
	printf("Digite o salario bruto: ");
	scanf("%f", &sal_bruto);
	if(sal_bruto <= 1751.81)
	{
		val_inss = sal_bruto * 0.08;
	}else
	{
		if(sal_bruto <= 2919.72)
		{
			val_inss = sal_bruto * 0.09;
		}else
		{
			if(sal_bruto <= 5839.45)
			{
				val_inss = sal_bruto * 0.11;
			}else
			{
				val_inss = 570.88;
			}
		}
	}
	sal_final = sal_bruto - val_inss;
	system("cls");
	printf("Salario Bruto: R$ %.2f \nValor INSS: R$ %.2f \nSalario com Desconto: R$ %.2f\n\n", sal_bruto, val_inss, sal_final);
	system("pause");
	return 0;
}