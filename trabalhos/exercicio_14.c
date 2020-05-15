#include <stdio.h>

int main()
{
	float valor_inicial, taxa_juros, valor_final;
	int meses;
	
	printf("Digite um valor: ");
	scanf("%f", &valor_inicial);
	printf("Digite uma taxa de juros: ");
	scanf("%f", &taxa_juros);
	printf("Digite a quantidades de meses: ");
	scanf("%d", &meses);
	
	valor_final = (taxa_juros / 100 * valor_inicial) * meses + valor_inicial;
	
	printf("Valor final: %.2f", valor_final);
	
	getchar();
	return 0;
}