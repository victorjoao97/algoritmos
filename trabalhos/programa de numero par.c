#include <stdio.h>

int main()
{
	// declara��o de variaveis
	int numero;
	
	printf("--Digitacao de numero par--\n\n");

	printf("Digite um numero par: ");
	scanf("%d", &numero);
	// la�o enquanto o numero for impar
	while(numero % 2 != 0){
		printf("Digite um numero par: ");
		scanf("%d", &numero);
	}

	// espera digitar algo para pausar a execu��o do programa
	getchar();
	return 0;
}