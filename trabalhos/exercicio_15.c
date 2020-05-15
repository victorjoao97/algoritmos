#include <stdio.h>

int main()
{
	int numero, intervaloA, intervaloB;
	
	printf("Digite um numero: ");
	scanf("%d", &numero);
	
	printf("Digite o intervalo A: ");
	scanf("%d", &intervaloA);
	printf("Digite o intervalo B: ");
	scanf("%d", &intervaloB);
	
	int contador;
	for (contador = intervaloA; contador <= intervaloB; contador++) {
		printf("%dx%d=%d\n", numero, contador, contador * intervaloB);
	}
	
	getchar();
	return 0;
}