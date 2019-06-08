#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n1, n2, n3, mult;
	
	printf("Digite o primeiro numero\n");
	scanf("%d", &n1);
	printf("Digite outro numero\n");
	scanf("%d", &n2);
	printf("Digite mais um numero\n");
	scanf("%d", &n3);
	
	mult = n1 * n2 * n3;
	
	printf("Multiplicacao %d", mult);
	system("pause");
	return 0;
}