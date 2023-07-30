#include <stdio.h>
#include <ctype.h>

int main()
{
	int i, j=0, cont=0;
	char nome[100];
	
	scanf("%[^\n]s" , nome);
	
	for (i=0; nome[i] != '\0'; i++) //contador de caracteres
	{
		cont++;
	}
	
	while (nome[cont] != ' ') //looping para achar o ultimo nome
	{
		cont--;
	}
	
	while (nome[j] != ' ') //looping para imprimir o primeiro nome
	{
		printf("%c" , tolower(nome[j]));
		j++;
	}
	
	printf("."); //imprimir "."
	cont++;
	
	for (i=0; nome[cont] != '\0'; cont++) //looping para imprimir o ultimo nome
	{
		printf("%c" , tolower(nome[cont]));
	}
	
	printf("@unb.br"); //imprimir email
	
	return 0;
}
