#include <stdio.h>
#include <math.h>
int main()
{
	float a, b, c, x1, x2, delta;
	printf("Digite o valor de a: ");
	scanf("%f", &a);
	printf("Digite o valor de b: ");
	scanf("%f", &b);
	printf("Digite o valor de c: ");
	scanf("%f", &c);
	
	delta = (-b * -b) - (4 * a * c);
	printf("Valor do delta: %.2f", delta);
	
	if(delta > 0)
	{
		x1 = (-b + (sqrt(delta))) / (2 * a);
		x2 = (-b - (sqrt(delta))) / (2 * a);
		printf("\nValor do x1: %.2f", x1);
		printf("\nValor do x2: %.2f", x2);
	}else if(delta < 0)
	{
		printf("Não existem raizes reais");
	}else
	{
		x1 = (-b + (sqrt(delta))) / (2 * a);
		printf("\nDelta = 0 entao uma unica raiz: %.2f", x1);
	}
	return 0;
}