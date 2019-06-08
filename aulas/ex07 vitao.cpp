#include <stdio.h>
#include <stdlib.h>
int main()
{
	char sexo;
	int tc;
	float sal;
	
	printf("Digite o sexo: ");
	scanf("%s", &sexo);
	printf("Digite o tempo de casa: ");
	scanf("%d", &tc);
	printf("Digite o salario: ");
	scanf("%f", &sal);
	
	if((sexo == 'M' || sexo == 'm') && tc > 15)
	{
		sal = (sal * 0.2) + sal;
	}
	else
	{
		if((sexo == 'F' || sexo == 'f') && tc > 10)
		{
			sal = (sal * 0.25) + sal;
		}
		else
		{
			sal = (sal * 0.1) + sal;
		}
	}
	printf("Salario final %.2f", sal);
	return 0;
}