#include <stdio.h>
#include <ctype.h>

int main ()
{
	int i, j, n;
	char str[1000];
	
	scanf("%d" , &n); //digitar quantidade de linhas
	getchar();
	
	for (i=0; i<n; i++)
	{
		scanf(" %[^\n]s" , str); //digitar a palavra (case sentive)
		
		for (j=0; str[j] != '\0'; j++) //looping para analisar cada caractere
		{
			if ((str[j] < 65) || (str[j] > 90 && str[j] < 97) || (str[j] > 122)) //caso caractere for diferente de uma letra, ele não mudará
			{
				str[j] = str[j];
			}
			
			else 
			{
				if (str[j] <= 77)
				{
					str[j] = str[j]+13;
				}
			
				else //para ultimas letras do alfabeto
				{
					str[j] = str[j]-13;
				}
			}
			printf("%c" , str[j]); //palavra criptografada
		}
		printf("\n");
	}
	return 0;
}
