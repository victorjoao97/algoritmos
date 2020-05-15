#include <stdio.h>

int main()
{
	int numero, resultado = 0;
 
	printf("Digite um numero: ");
	scanf("%d", &numero);
	
	int contador;
	for (contador = 2; contador <= numero / 2; contador++) {
		if (numero % contador == 0) {
		   resultado++;
		   break;
		}
	}
	
	if (resultado == 0){
		printf("%d e um numero primo\n", numero);
	}else{
		printf("%d nao e um numero primo\n", numero);
	}
	
	getchar();
	return 0;
}