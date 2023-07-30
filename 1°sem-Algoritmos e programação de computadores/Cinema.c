#include <stdio.h>

int main()
{
    int n, n2;
    
    scanf("%d%d", &n , &n2); //n = linhas, n2 = colunas
    
    int i, j, l, cont=0, posicaol=0, posicaoc=0, num=0;
    char matriz[n][n2], c, letra;
    
    
    // * contador de colunas da matriz *
    for (i=0; i<n; i++)
    {
    	cont++;
	}
    
    cont--;
	
	// * digitar as posicoes *
	while (scanf(" %c%d", &letra, &num) != EOF)
	{
		letra -= 65; // encontrar um valor int relacionado a letra, ex: A=1, B=2
		posicaol = cont-letra; //determinar a posicao da coluna - encontrado
		
		matriz[posicaol][num-1] = 'X'; // X na coordenada indicada
	}
	
	
	// * imrpimir a primeira linha *
    printf(" ");
    for (l=1; l<=n2; l++)
    {
    	if (l>= 10)
    	{
    		printf(" %d" , l);
		}
    	
		else if(l<10)
		{
			printf(" 0%d" , l);
		}
	}
	printf("\n");


	// * montar a matriz *
	for (i=0; i<n2; i++)
	{
		for(j=0; j<n; j++)
		{
			if (matriz[j][i] == 'X')
			{
				continue;
			}
			
			else 
			{
				matriz[j][i] = '-';
			}
		}
	}


	// * imrpimir a primeira coluna *
	c = 64; // 1 caractere antes do "A" na tabela ascii
	c += n;


	for (i=0; i<n; i++)
	{
		printf("%c " , c); //imprime a coluna com as letras decrescentes
		c--;
		
		// * imprimir a matriz referente a coluna *
		for (j=0; j<n2; j++)
		{
			printf("%c" , matriz[i][j]);
			
			if (matriz[i][j] == 'X')
			{
				printf("X ");
			}
			
			else 
			{
				printf("- ");
			}
			
		}
		printf("\n");
	} 
	
    return 0;
}
