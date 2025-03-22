#include<math.h>
#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<locale.h>

int main()
{
	setlocale(LC_ALL,"PORTUGUESE");
	system("color 0b");
	
	int i, j;
	float valor[5][4], vendav[5]={0}, vendas[4]={0}, valorm=0;
	
	for(i=0; i<5; i++)
	{
		printf("Informe o valor de venda semanal do %iº vendedor :", i+1);	
		for(j=0; j<4; j++)
		{
			printf("\n %iª Semana;", j+1);
			scanf("%f", &valor[i][j]);
			vendav[i]+=valor[i][j];//total de vendas por vendedor.
			vendas[j]+=valor[i][j];//total de vendas por semana.
		}
	}
	for(i=0; i<5; i++) //cálculo vendas mês.
	{
		valorm+=vendav[i];
	}
	printf("\nTotal de vendas do mês de cada vendedor:\n");
    for ( i = 0; i < 5; i++) 
	{
        printf("Vendedor %d: R$ %.2f\n", i + 1, vendav[i]);
    }

    printf("\nTotal de vendas de cada semana (todos os vendedores juntos):\n");
    for (int j = 0; j < 4; j++) 
	{
        printf("Semana %d: R$ %.2f\n", j + 1, vendas[j]);
    }

    printf("\nTotal de vendas do mês: R$ %.2f\n", valorm);

    return 0;

	system("pause");	
}
