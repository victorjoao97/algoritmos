#include <stdio.h>

int main()
{
	// hora inicial e final
	int horaInicial = 8, horaMaxima = 18;
	// minuto inicial e final
	int minutoInicial, minutoMaximo = 45;
	// intervalo de minutos entre cada hora
	int minutoIntervalo = 15;
	
	for(;horaInicial <= horaMaxima; horaInicial++) {
		for(minutoInicial = 0; minutoInicial <= minutoMaximo; minutoInicial += minutoIntervalo){
			printf("%02d:%02d\n", horaInicial, minutoInicial);
			if(horaInicial == horaMaxima){
				// faz o contador exibir só o primeiro laço quando é a
				// ultima repetição da hora
				minutoInicial = 999;	
			}
		}
	}
	getchar();
	return 0;
}