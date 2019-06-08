#include <stdio.h>
#include <stdlib.h>
int main()
{
	char carac;
	printf("Digite uma letra: ");
	fflush(stdin);
	scanf("%c", &carac);
	if((carac >= 'A' && carac <= 'Z') || (carac >= 'a' && carac <= 'z'))
	{
		printf("E letra\n");
	}
	else
	{
		printf("Nao e letra\n");
	}
	return 0;
}