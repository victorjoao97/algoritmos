#include <stdio.h>

int main()
{
	// declaração de variaveis
	int linha, j, primeiro = 2, matriz[6][4];
	
	// laço externo contando as linhas
	for (linha=0; linha<6; linha++)
	{
		// primeira coluna de cada linha recebe o valor incremental
		// da variavel primeiro
		matriz[linha][0] = primeiro++;
		
		// laço interno contando as colunas
		// de 1 a 4 pois a primeira coluna já definida no bloco acima
		for(j=1;j<4;j++){
			// as colunas recebem o valor da coluna anterior
			// e se soma 2 
			matriz[linha][j] = matriz[linha][j-1] + 2;
		}
	}
	
	getchar();
	
	// imprime a matriz
	printf("--Desenho de Matriz 6x4--\n\n");
	for ( linha=0; linha<6; linha++)
	{
		for(j=0;j<4;j++){
			printf("%d\t", matriz[linha][j]);
		}
		printf("\n");
	}
	// espera digitar algo para pausar a execução do programa
	getchar();
	return 0;
}