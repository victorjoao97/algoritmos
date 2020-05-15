#include <stdio.h>

int main()
{
	int numero, quantidade_numeros = 0, soma = 0, media;
	
	do {
		printf("Digite um numero: ");
		scanf("%d", &numero);
		
		quantidade_numeros++;
		soma += numero;
	}while(numero != -1);
	
	media = soma / quantidade_numeros;
	
	printf("Numeros digitados: %d\nMedia dos numeros: %d", quantidade_numeros, media);
	
	getchar();
	return 0;
}