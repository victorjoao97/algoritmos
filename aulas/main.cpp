#include <stdio.h>
#include "teste.cpp"

int main()
{
	int logado, user, pass;
	int login(int user, int pass);

	void menu()
	{
		printf("Digite o usuario");
		scanf("%d", &user);
		printf("Digite a senha");
		scanf("%d", &pass);
	}
	
	menu();

	while(login(user, pass) != 1)
	{
		printf("Usuario ou senha invalida\nDigite o usuario");
		scanf("%d", &user);
		printf("Digite a senha");
		scanf("%d", &pass);
		login(user, pass);
	}

	return 0;
}