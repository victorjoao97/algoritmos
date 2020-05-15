#include <stdio.h>

int main()
{
	int base, expoente, resultado = 0, contador = 1;
	
	printf("Digite a base: ");
	scanf("%d", &base);
	printf("Digite o expoente: ");
	scanf("%d", &expoente);
	
	resultado = base;
	
	while (contador < expoente) {
		resultado *= base;
		contador++;
	}
	
	printf("\n%d", resultado);
	
	getchar();
	return 0;
}