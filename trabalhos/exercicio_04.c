#include <stdio.h>

int main()
{
	int numeros[10], maiorNumero = 0, menorNumero = (int)((unsigned int)~0 >> 1);
	
	int contador;
	for(contador = 0; contador < 10; contador++) {
		printf("\nDigite um numero: ");
		scanf("%d", &numeros[contador]);
		
		if (numeros[contador] > maiorNumero) {
			maiorNumero = numeros[contador];
		}
		if(numeros[contador] < menorNumero) {
			menorNumero = numeros[contador];
		}
	}
	
	printf("Menor numero: %d\nMaior numero: %d", menorNumero, maiorNumero);
	
	getchar();
	return 0;
}