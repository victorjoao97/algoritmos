#include <stdio.h>

int main()
{
	int proximo = 1, anterior = -1, serie;
	
	int contador;
	for (contador = 1; contador <= 20; contador++) {
		serie = proximo + anterior;
		anterior = proximo;
		proximo = serie;
		printf("%d\n", serie);
	}
	
	getchar();
	return 0;
}