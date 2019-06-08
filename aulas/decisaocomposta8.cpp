#include <stdio.h>
#include <stdlib.h>
int main()
{
	float nota1, nota2, mediaTrabalho, mediaFinal;
	printf("Digite a nota 1: ");
	scanf("%f", &nota1);
	printf("\nDigite a nota 2: ");
	scanf("%f", &nota2);
	printf("\nDigite a media do trabalho: ");
	scanf("%f", &mediaTrabalho);
	mediaFinal = (((nota1 + nota2) / 2) * 0.7) + (mediaTrabalho * 0.3);
	if(mediaFinal > 6.5)
	{
		printf("Aluno aprovado: %.2f", mediaFinal);
	}
	else
	{
		printf("Aluno reprovado: %.2f", mediaFinal);
//		printf("\n%.2f", ((nota1 + nota2) / 2) * 0.7);
	}
	system("pause");
	return 0;
}