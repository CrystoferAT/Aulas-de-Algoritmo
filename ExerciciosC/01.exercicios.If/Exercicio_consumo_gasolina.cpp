#include<stdio.h>
#include<locale.h>
#include<stdlib.h>

int main()
{
	system("color 0b");
	setlocale(LC_ALL,"PORTUGUESE");
	
	float km, lt, cons;
	printf("Digite a distancia em km:");
	scanf("%f", &km);
	printf("Digite a quantidade de combustivel que foi gasto:");
	scanf("%f",&lt);
	cons=km/lt;
	
	printf("\n %.1f Km por litro;",cons);
	
	if(cons<8)
	{
		printf("\nVenda o carro!");	
		
	}
	else if(cons>=8&&cons<=14)
	{
		printf("\nEconomico");

	}
	
	if(cons>14)
	{
		printf("\nSuper economico");		
	}		
}
	
	
	

	

	

