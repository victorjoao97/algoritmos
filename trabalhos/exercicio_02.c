#include <stdio.h>

int main()
{
	int paisA = 40000, paisB = 100000, anos = 0;
	
	while(paisA <= paisB)
	{
		paisA = paisA * 0.05 + paisA;
		paisB = paisB * 0.025 + paisB;
		anos++;
	}
	
	printf("%d anos para pais A, passar ou igualar os habitantes pais B", anos);
	
	getchar();
	return 0;
}