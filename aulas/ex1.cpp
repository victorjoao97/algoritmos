#include <stdio.h>
int main()
{
	int a, b, c, somaAB, multiplicaBC, subtraiCA, somaDivisaoACB;
	
	a = 9;
	b = 17;
	c = -6;
	somaAB = a + b;
	subtraiCA = c - a;
	multiplicaBC = b * c;
	somaDivisaoACB = a + c / b;
	
	printf("Soma = %d \n Subtra��o = %d \n Multiplica��o = %d \n Soma e Divis�o = %d", somaAB, subtraiCA, multiplicaBC, somaDivisaoACB);
	return 0;
}