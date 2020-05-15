#include <stdio.h>
#include <stdlib.h>
int main()
{
	float qtd_kg, val_total;
	int tipo_doce;
	printf("Digite o tipo de doce: ");
	scanf("%d", &tipo_doce);
	printf("Digite o peso em kilos: ");
	scanf("%f", &qtd_kg);
	
	if(qtd_kg <= 2.0)
	{
		switch(tipo_doce)
		{
		case 1:
			val_total = 65.0 * qtd_kg;
			printf("%.2f KG de Trufa - R$ %.2f", qtd_kg, val_total);
			break;
		case 2:
			val_total = 89.9 * qtd_kg;
			printf("%.2f KG de Bolo - R$ %.2f", qtd_kg, val_total);
			break;
		case 3:
			val_total = 76.9 * qtd_kg;
			printf("%.2f KG de Torta - R$ %.2f", qtd_kg, val_total);
			break;
		case 4:
			val_total = 23.89 * qtd_kg;
			printf("%.2f KG de Bombom - R$ %.2f", qtd_kg, val_total);
			break;
		default:
			printf("Tipo de doce invalido");
			break;
		}
	}else
	{
		switch(tipo_doce)
		{
		case 1:
			val_total = 60.0 * qtd_kg;
			printf("%.2f KG de Trufa - R$ %.2f", qtd_kg, val_total);
			break;
		case 2:
			val_total = 80.75 * qtd_kg;
			printf("%.2f KG de Bolo - R$ %.2f", qtd_kg, val_total);
			break;
		case 3:
			val_total = 67.89 * qtd_kg;
			printf("%.2f KG de Torta - R$ %.2f", qtd_kg, val_total);
			break;
		case 4:
			val_total = 20.76 * qtd_kg;
			printf("%.2f KG de Bombom - R$ %.2f", qtd_kg, val_total);
			break;
		default:
			printf("Tipo de doce invalido");
			break;
		}
	}
	printf("\n\n");
	system("pause");
	return 0;
}