#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int fatorial(int n) 
{
	if(n == 0) //se n for igual a zero retornar� 1, se n�o retornar� n* fatorial de n-1
	{
		return 1;
	}
	else
	{
		return n * fatorial(n-1);
	}
}

int main()
{
	int resultado;
	resultado = fatorial(5);
	printf("Fatorial de 5 eh: %d", resultado);
	return 0;
}
