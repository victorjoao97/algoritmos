#include <stdio.h>
#include <locale.h>

int dobro(int numero)
{
	return numero * 2;
}
main()
{
	setlocale(LC_ALL, "Portuguese");
	const float GRAMAS = 1000.0;
	float pesoKG, pesoG;
	
	pesoKG = 23.5;
	pesoG = pesoKG * GRAMAS;
	
	printf("Peso da criança em Kg %.2f \n Peso da criança em G %.2f", pesoKG, pesoG);
	printf(dobro(2));
}
