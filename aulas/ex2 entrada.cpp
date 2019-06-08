#include <stdio.h>

int main()
{
	float nota1, nota2, peso1, peso2, media;
	
	printf("Primeira nota\n");
	scanf("%f", &nota1);
	
	printf("\nSegunda nota\n");
	scanf("%f", &nota2);
	
	printf("\nPeso nota 1\n");
	scanf("%f", &peso1);
	
	printf("\nPeso nota 2\n");
	scanf("%f", &peso2);
	
	media = ((nota1 * peso1) + (nota2 * peso2)) / 2;
	
	printf("Media ponderada  = %f", media);
	
	return 0;
}