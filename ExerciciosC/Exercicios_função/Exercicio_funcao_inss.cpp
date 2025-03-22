#include<math.h>
#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<locale.h>

float inss(float slr)
{
	float desc;
	
	if (slr<=1302)
	{
		desc=slr*0.075;	
	}
	
	else if (slr>=1302.01 && slr<2571.29)
	{
		desc=slr*0.09;	
	}
	
	else if (slr>=2571.30 && slr<3856.94)
	{
		desc=slr*0.12;	
	}
	
		else if (slr>=3856.95 && slr<7507.49)
	{
		desc=slr*0.14;	
	}	
	return desc;
}

int main()
{
	setlocale(LC_ALL,"PORTUGUESE");
	system("color 0b");
	
	float slr, desc;

	printf("Informe o seu Salário: R$");
	scanf("%f", &slr);
	
	desc=inss(slr);
	
	printf("\n Valor do desconto do inss: R$%.2f", desc);
}
