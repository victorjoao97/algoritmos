#include <stdio.h>
#include <stdlib.h>

int main()
{
	float valorCompra, desconto, pagamento;
	int codigoPagto;
	
	printf("Digite o valor da compra: ");
	scanf("%f", &valorCompra);
	printf("Digite o codigo do pagamento: ");
	scanf("%d", &codigoPagto);
	desconto = 0.0;
	if(codigoPagto == 1)
	{
		desconto = (valorCompra * 5) / 100;
	}
	pagamento = valorCompra - desconto;
	printf("\nO valor da compra: %.2f, desconto: R$ %.2f, valor total: R$ %.2f\n", valorCompra, desconto, pagamento);
	system("pause");
	return 0;
}