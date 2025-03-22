#include<math.h>
#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<locale.h>

float tradicional()
{
	float preco=4, quant, tot;
	printf("\nInforme a Quantidade :");
	scanf("%f", &quant);
	tot=preco*quant;
	return tot;
}
float duplo()
{
	float preco=5, quant, tot;
	printf("\nInforme a Quantidade :");
	scanf("%f", &quant);
	tot=preco*quant;
	return tot;
}
float especial()
{
	float preco=6, quant, tot;
	printf("\nInforme a Quantidade :");
	scanf("%f", &quant);
	tot=preco*quant;
	return tot;
}

int main()
{
	setlocale(LC_ALL,"PORTUGUESE");
	system("color 0b");
	
	int cod;
	
	printf("1-Cachorro quente tradicional R$4,00.");
	printf("\n2-Cachorro quente duplo R$5,00.");
	printf("\n3-Cachorro quente especial R$6,00.");
	printf("\nInforme o cod do seu pedido: ");	
	scanf("%i", &cod);
	
	if(cod==1)
	{
		tot=tradicional();
		printf("\nTotal a pagar é : R$%.2f", tot);
	}
	else if(cod==2)
		{
			tot=duplo();
			printf("\nTotal a pagar é : R$%.2f", tot);
		}
	else if(cod==3)
		{
			tot=especial();
			printf("\nTotal a pagar é : R$%.2f", tot);
		}
	else 
		{
			printf("\n Inválido.");
		}

}
