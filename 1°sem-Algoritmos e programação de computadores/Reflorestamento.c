#include <stdio.h>

int main()
{
    int n, i, l, m=0, soma=0, resultado=0;

    scanf("%d" , &n);

    int mapa[n][n], str[n];

    for (i=0; i<n; i++) //digitar os valores do mapa
    {
        for (l=0; l<n; l++)
        {
            scanf("%d" , &mapa[i][l]);
        }
    }

    for (l=0; l<n; l++) //armazenar a soma dos valores de cada coluna
    {
        for (i=0; i<n; i++)
        {
            soma += mapa[i][l];
        }

        str[m] = soma; //armazenamento na string

        soma=0; //reset das variaveis
        m++;
    }

    resultado = str[0]; //util para comparação no proximo loop

    for (i=1; i<n; i++)
    {
        if (str[i] > resultado) //resultado irá armazenar o maior valor da soma das colunas
        {
            resultado = str[i];
        }
    }

    for (i=0; i<n; i++)
    {
        if (resultado == str[i]) //primeira soma da coluna que aparecer com o mesmo valor do resultado
        {
            if (resultado == 0) //nenhum caminho
            {
                printf("0");
                break;
            }

            else
            {
            //string começa em 0, então se soma 1 para dar o valor minimo
            printf("%d" , i+1); //imprime a coluna, não o valor da soma dela 
            break;
            }
        }
    }
    return 0;
}
