#include <stdio.h>

int main()
{
	int soma = 0, numero;
	float media;
	
	int contador;
	for (contador = 0; contador <= 8; contador++) {
		printf("Digite um numero: ");
		scanf("%d", &numero);
		soma += numero;
	}
	
	media = soma / 8.0;
	
	printf("A soma dos numeros: %d\nA media dos numeros: %.2f", soma, media);
	
	getchar();
	return 0;
}