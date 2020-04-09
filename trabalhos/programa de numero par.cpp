#include <stdio.h>

main()
{
	float numero;
	
	do {
		printf("Digite um numero par: ");
		scanf("%f", &numero);
	}while(numero % 2 != 0);

}