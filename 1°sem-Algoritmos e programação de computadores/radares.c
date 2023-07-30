#include <stdio.h>

double calculaVelocidadeMedia(int tA, int tB, double distancia)
{
	double delta = tB-tA;
	delta /= 3600;
	double VM =distancia/delta;
	
	return VM;
}

int levouMulta(int tA, int tB, double distancia, double velocidadeMaxima)
{
	double delta = tB-tA;
	delta /= 3600;
	double n =distancia/delta;
	
	if (n <= velocidadeMaxima)
	{
		return 0;
	}
	
	else 
	{
		return 1;
	}
}
