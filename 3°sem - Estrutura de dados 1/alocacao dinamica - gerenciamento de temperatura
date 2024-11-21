#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "tipos.h"

// struct de retorno para o case 3
typedef struct {
    char cidade[20];
    float temperatura;
} data;

// funcao calcular temperatura media
float func_tmedia(TTemperaturas *temperaturas) {
    float media = 0;

    for (int i=0; i<temperaturas->qtde_medidas; i++) {
        media += temperaturas->medidas[i].temperatura;
    }

    media /= temperaturas->qtde_medidas;

    return media;
}

// funcao calcular maior temperatura
data func_maior(TTemperaturas *temperaturas) {
    float maior_temp = temperaturas->medidas[0].temperatura;
    int index = 0;
    for (int i=0; i<temperaturas->qtde_medidas; i++) {
        if (temperaturas->medidas[i].temperatura > maior_temp) {
            maior_temp = temperaturas->medidas[i].temperatura;
            index = i;
        }
    }

    data maior;
    strcpy(maior.cidade, temperaturas->medidas[index].cidade);
    maior.temperatura = temperaturas->medidas[index].temperatura;

    return maior;
}

// funcao calcular menor temperatura
data func_menor(TTemperaturas *temperaturas) {
    float menor_temp = temperaturas->medidas[0].temperatura;
    int index = 0;
    for (int i=0; i<temperaturas->qtde_medidas; i++) {
        if (temperaturas->medidas[i].temperatura < menor_temp) {
            menor_temp = temperaturas->medidas[i].temperatura;
            index = i;
        }
    }

    data menor;
    strcpy(menor.cidade, temperaturas->medidas[index].cidade);
    menor.temperatura = temperaturas->medidas[index].temperatura;

    return menor;
}

int main(){
    int escolha=0;
    TTemperaturas temperaturas;

    while (escolha != 4) {
        printf("escolha entre as opcoes abaixo:\n 1-Reset\n 2-Inserir medida\n 3-Estatistica\n 4-Sair\n");
        scanf("%d" , &escolha);

        switch (escolha) {
            case 1:
                printf("Qual o numero maximo de dias que deseja registrar?: ");
                scanf("%d", &temperaturas.qtde_dias);

                temperaturas.medidas = (TMedidas *)malloc(temperaturas.qtde_dias * sizeof(TMedidas));
                temperaturas.qtde_medidas = 0;
                break;
            
            case 2:
                if (temperaturas.qtde_medidas >= temperaturas.qtde_dias) {
                    printf("Nao e possivel inserir mais valores\n");
                    break;
                }

                else {
                    printf("Digite o nome da cidade: ");
                    scanf("%s" , temperaturas.medidas[temperaturas.qtde_medidas].cidade);

                    while (getchar() != '\n');

                    printf("Digite a temperatura: ");
                    scanf("%f" , &temperaturas.medidas[temperaturas.qtde_medidas].temperatura);

                    temperaturas.qtde_medidas++;
                    break;
                }

            case 3:
                if(temperaturas.qtde_medidas == 0){
                    printf("Nenhuma medida registrada\n");
                    break;
                }

                printf("A temperatura media e de: %.2f\n" , func_tmedia(&temperaturas));
                printf("A menor temperatura foi de: %.2f em %s\n" , func_menor(&temperaturas).temperatura , func_menor(&temperaturas).cidade);
                printf("A maior temperatura foi de: %.2f em %s\n\n" , func_maior(&temperaturas).temperatura , func_maior(&temperaturas).cidade);
                break;
            
            case 4:
                printf("programa encerrado\n");
                return 0;
                free(temperaturas.medidas);
            
            default:
                printf("Digite um valor valido\n");
                break;
        }
    }
    
    free(temperaturas.medidas);
    return 0;
}
