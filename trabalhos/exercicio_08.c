#include <stdio.h>

int main()
{
	int numero, pares = 0, impares = 0;
	
	int contador;
	for(contador = 1; contador <= 7; contador++) {
		printf("Digite um numero inteiro: ");
		scanf("%d", &numero);
		
		if (numero % 2 == 0) {
			pares++;
		} else {
			impares++;
		}
	}
	
	if (pares > impares) {
		printf("Foram digitados mais numeros pares");
	} else {
		printf("Foram digitados mais numeros impares");
	}
	
	getchar();
	return 0;
}