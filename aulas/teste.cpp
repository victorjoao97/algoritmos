#include <stdio.h>
int login(int user, int pass)
{
	if(user == 705 && pass == 123456)
	{
		return 1;
	}else
	{
		return 0;
	}
}