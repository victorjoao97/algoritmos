#include <stdio.h>
#include <stdbool.h>

bool checa_numero_primo(int numero)
{
	
	int resultado = 0, contador;
	
	for (contador = 2; contador <= numero / 2; contador++) {
		if (numero % contador == 0) {
		   resultado++;
		   break;
		}
	}
	
	if (resultado == 0){
		return true;
	}else{
		return false;
	}
}

int main()
{
	int numero, contador;
 
	printf("Digite um numero entre 0 e 1000: ");
	scanf("%d", &numero);
	
	if (numero <= 1000) {
		for (contador = 1; contador <= numero; contador++) {
			if (checa_numero_primo(contador)) {
				printf("%d e um numero primo\n", contador);
			}
		}
	}else{
		printf("Apenas numeros entre 0 e 1000");
	}
	
	getchar();
	return 0;
}