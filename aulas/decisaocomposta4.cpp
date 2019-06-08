#include <stdio.h>
#include <stdlib.h>
int main()
{
	float altura, pesoIdeal;
	char sexo;
	printf("Digite sua altura: ");
	scanf("%f", &altura);
	printf("\nDigite seu sexo: ");
	fflush(stdin);
	scanf("%c", &sexo);
	if(sexo == 'F' || sexo == 'f')
	{
		pesoIdeal = (62.1 * altura) - 44.7;
	}
	else
	{
		pesoIdeal = (72.7 * altura) - 58.0;
	}
	printf("\nSeu peso ideal e: %.2f KG\n", pesoIdeal);
	system("pause");
	return 0;
}