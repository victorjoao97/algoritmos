#include <stdio.h>

main()
{
	int numero;
	
	do {
		printf("Digite um numero par: ");
		scanf("%d", &numero);
	}while(numero % 2 != 0);

	getchar();
}