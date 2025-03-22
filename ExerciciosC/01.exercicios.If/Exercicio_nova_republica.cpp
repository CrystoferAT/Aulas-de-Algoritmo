#include<stdio.h>
#include<locale.h>
#include<stdlib.h>

int main()
{
	setlocale(LC_ALL,"PORTUGUESE");
	system("color 0b");
	int ndp;
	float rba, ipg, bc, ipp;
	
	printf("Digite a renda bruta anual[RBA]:");
	scanf("%f", &rba);
	printf("\nDigite o numero de dependentes[NDP]:");
	scanf("%i", &ndp);
	printf("\nDigite o imposto pago no ano [IPG]:");
	scanf("%f", &ipg);
	//bc=rba-ndp*1500;
	
	if(bc<=15000)
	{
		printf("insento");
	}
	else if(bc>=15001 && bc<=35000)
	{
		bc=rba-ndp*1500;
		ipp=bc*0.075;
		printf("imposto a pagar%.2f", ipp);
	}
	else if(bc>=35001 && bc<280000)
	{
		bc=rba-ndp*1500;
		ipp=bc*0.015;
		printf("imposto a pagar%.2f", ipp);
	}
	else
	{
		bc=rba-ndp*1500;
		ipp=bc*0.06;
		printf("imposto a pagar%.2f", ipp);
	}
}
