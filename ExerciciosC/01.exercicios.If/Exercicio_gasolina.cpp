#include<stdio.h>
#include<locale.h>
#include<stdlib.h>

int main()
{
	setlocale(LC_ALL,"PORTUGUESE");
	system("color 0b");
	
	int tipo;
	float tot, tot1, quant,  a=4.09,g=6.39 ;
	
	printf("Qual o combustivel:");
	printf("\nAlcool [1]:");
	printf("\nGasolina[2]:");
	printf("\n?:");
	scanf("%i",&tipo);

	if(tipo==1)
	{
		printf("informe quantos litros de combustivel:");
		scanf("%f", &quant);
		
		
		if(quant>=20)
		{
		tot=a*quant;
		tot1=tot-tot*0.06;
		printf("%.2f", tot1);
		}
		else
		{
		tot=a*quant;
		tot1=tot-tot*0.035;
		printf("%.2f", tot1);
		}
	}
	if(tipo==2)
	
	{
		printf("informe quantos litros de combustivel:");
		scanf("%f", &quant);
		
		
		if(quant>=20)
		{
		tot=g*quant;
		tot1=tot-tot*0.06;
		printf("%.2f", tot1);
		}
		else
		{
		tot=g*quant;
		tot1=tot-tot*0.035;
		printf("%.2f", tot1);
		}
		
	}

}
