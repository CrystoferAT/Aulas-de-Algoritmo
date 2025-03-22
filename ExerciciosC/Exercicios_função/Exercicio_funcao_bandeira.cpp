#include<math.h>
#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<locale.h>

float bandeira1()
{
	float preco=2.7,km=0,tot=5.4;
	printf("Informe o Km:");
	scanf("%f", &km);
	tot+=km*preco;
	return tot;
}

float bandeira2()
{
	float preco=3.3,km,tot=5.4;
	printf("Informe o Km:");
	scanf("%f", &km);
	tot+=km*preco;
	return tot;
}

int main()
{
	setlocale(LC_ALL, "PORTUGUESE");
	system("color 0b");
	
	int bandeira;
	float tot;
	
	printf(" 1 Bandeira 1");
	printf("\n 2 Bandeira 2");
	printf("\nInforme a Bandeira:");
	scanf("%i", &bandeira);
	
	if(bandeira==1)
	{
		tot=bandeira1();
		printf("\n%.2f", tot);
	}
	else if(bandeira==2)
	{
		tot=bandeira2();
		printf("\n%.2f", tot);
	}
	else
	{
		printf("\n Inválido.");
	}
	
}
