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
	float vendas[4][5];

	for(i=0; i<4; i++)
	{
		printf("%dº Trimestre Digite o valor das vendas de cada região:\n", i+1);
		for(j=0; j<5; j++)
		{
			printf("Região %d :R$", j+1);
			scanf("%f", &vendas[i][j]);
		}	
	}
	printf("\n");
		
	for(i=0; i<4; i++)
	{
		for(j=0; j<5; j++)
		{
			printf("R$%.2f\t", vendas[i][j]);
		}
		printf("\n");
	}
}
