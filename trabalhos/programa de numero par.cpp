#include <stdio.h>

int main()
{
	// declaração de variaveis
	int numero;
	
	printf("--Digitacao de numero par--\n\n");

	printf("Digite um numero par: ");
	scanf("%d", &numero);
	// laço enquanto o numero for impar
	while(numero % 2 != 0){
		printf("Digite um numero par: ");
		scanf("%d", &numero);
	}

	// espera digitar algo para pausar a execução do programa
	getchar();
	return 0;
}