#include <stdio.h>

int main() {
    int n, i, l, c, controle = 0;
    char cursor;

    scanf("%d", &n); // digitar a quantidade de frases

    char matriz[1000][1000];

    for (i = 0; i < n; i++) // looping para escrever as frases
    {
        scanf(" %[^\n]", matriz[i]); // corrigido: ler a linha corretamente
    }

    scanf("%d%d", &l, &c); // digitar a linha e a coluna do caractere desejado

    controle = c;

    l--; // controle de variáveis
    c--;

    while (scanf(" %c", &cursor) != EOF) // digitar as coordenadas do cursor
    {
        if (cursor == 'j') // j = abaixa uma linha
        {
        	if (l==(n-1)) //ultima linha se repete
        	{
        		l=(n-1);
			}
			
			else 
			{
				l++;	
			}
            
            if (matriz[l][c] == '\0' || matriz[l][c] == '\n') //ujustar para último dígito, em caso de '\0'
            {
                while ((matriz[l][c] == '\0' || matriz[l][c] == '\n') && c > 0)
                {
                    c--;
                }
            }

            printf("%d ", l+1);
            printf("%d ", c+1);
            printf("%c\n", matriz[l][c]);

            c = controle; // reverter a variável
            c--;
        }
        else if (cursor == 'k') // k = sobe uma linha
        {
        	if (l==0)
        	{
        		l=0;
			}
			
			else
			{
				l--;
			}

            if (matriz[l][c] == '\0' || matriz[l][c] == '\n')
            {
                while ((matriz[l][c] == '\0' || matriz[l][c] == '\n') && c > 0)
                {
                    c--;
                }
            }

            printf("%d ", l+1);
            printf("%d ", c+1);
            printf("%c\n", matriz[l][c]);

            c = controle; // reverter a variável
            c--;
        }
    }

    return 0;
}
