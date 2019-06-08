#include <stdio.h>
#include <stdlib.h>

int main()
{
	float notaProva1, notaProva2, mediaProva, mediaTrab, mediaFinal;
	
	printf("Digite a nota da primeira prova: ");
	scanf("%f", &notaProva1);
	printf("\nDigite a nota da segunda prova: ");
	scanf("%f", &notaProva2);	
	printf("\nDigite a media do trabalho: ");
	scanf("%f", &mediaTrab);
	mediaProva = (notaProva1 + notaProva2) / 2.0;
	mediaFinal = 0.7 * mediaProva + 0.3 * mediaTrab;
	
	if(mediaFinal > 6.5)
	{
		printf("\nAluno aprovado\n");
	}else
	{
		printf("\nAluno reprovado\n");
	}
	printf("Media final: %.2f pontos\n", mediaFinal);
	system("pause");
}