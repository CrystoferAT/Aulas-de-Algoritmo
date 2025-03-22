#include<stdio.h>
#include<locale.h>
#include<stdlib.h>

int main()
{
	setlocale(LC_ALL,"PORTUGUESE");
	system("color 0b");
	
	int niv;
	float quant, total, a=12, b=17, c=25;
	printf("Digite o nivel do professor :");
	printf("\n Nivel[1].");
	printf("\n Nivel[2].");
	printf("\n Nivel[3].");
	printf("\n	?");
	scanf("%i",&niv);

	
	if(niv==1)
	{
		printf("Digite as horas trabalhadas pelo professor:");
		scanf("%f",&quant);
		total=quant*a;
		printf("Total :R$%.2f", total);
	}
	if(niv==2)
	{
		printf("Digite as horas trabalhadas pelo professor:");
		scanf("%f",&quant);
		total=quant*b;
		printf("\n Total: R$%.2f",total);
	}
	 if (niv==3)
	{
		printf("Digite as horas trabalhadas pelo professor:");
		scanf("%f",&quant);
		total=quant*c;
		printf("\n Total: R$%.2f", total);
	}
	
}
