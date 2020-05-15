#include <stdio.h>

int main()
{
	int nota;
	do{
		printf("Digite uma nota entre 0 e 100: ");
		scanf("%d", &nota);
		
		if(nota > 100 || nota < 0) {
			printf("Nota fora do intervalo, digite novamente\n");
		}
	}while(nota > 100 || nota < 0);

	getchar();
	return 0;
}