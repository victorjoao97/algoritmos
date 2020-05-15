#include <stdio.h>

int main()
{
	char nomeUsuario[50];
	int senha;
	
	printf("Digite o nome de usuario: ");
	scanf("%s", nomeUsuario);
	
	do {
		printf("Digite uma senha numerica de 5 digitos: ");
		scanf("%d", &senha);
	}while(senha < 10000 || senha > 99999);
	
	getchar();
	return 0;
}