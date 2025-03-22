//Numa manhã inspirada um peoscador pescou vários peixes de vários tamanhos, e sabe
//que vendendo os peixes com 500 gramas ou menos por 5 reais a unidade, e os peixes
//acima de 500 gramas a 10 reais a unidade vai ter uma boa renda.
//Faça um programa em C para mostrar ao pescador o peso total de sua pescaria os
//rendimentos parciais gerados (em R$ por categoria), e o valor total (em R$) a ser
//conseguido com a venda dos peixes no mercado.
//Para a entrada de dados, peça ao pescador a quantidade de peixes pescados e em
//seguida os pesos de cada peixe, após essas informações os resultados solicitados acima.
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<conio.h>
#include<string.h>
#include<math.h>

int main()
{

	setlocale(LC_ALL,"PORTUGUESE");
	system("color 0b");
	
	int i, quant;
	float peso=0, px_g=0, px_p=999, peso_t;
	float valor_g=10, valor_p=5, valor_t;
	float tot_g, tot_p;
	printf("Digite quantos peixes você pescou:");
	scanf("%d", &quant);
	
	if (quant>0)
	{
		for(i=0; i<quant; i++)
		{
			printf("\nDigite o peso do %dº peixe em gramas:" ,i+1);
			scanf("%f", &peso);
			peso_t+=peso;
			
			if (peso>500)
			{
				px_g=peso;
				tot_g+=valor_g;
			}
			else 
			{
				px_p=peso;
				tot_p+=valor_p;
			}		
		}
		valor_t=tot_g+tot_p;
		
		printf("\nO maior peixe tem :%.0f gramas", px_g);
		printf("\nO menor peixe tem :%.0f gramas", px_p);
		printf("\nO total dos peixes grandes é :R$%.2f", tot_g);
		printf("\nO total dos peixes pequenos é :R$%.2f", tot_p);
		printf("\nO valor total das vendas é :R$%.2f", valor_t);
	}
	else
	{
		printf("\nDados inválidos.");
	}
}
