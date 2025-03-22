#include<stdio.h>
#include<locale.h>
int main()
{
	int ano;
	float imposto, preco;
	printf("Digite o ano do carro:");
	scanf("%i", &ano);
	
	printf("Digite o preço do carro:");
	scanf("%f", &preco);
	
	if(ano>=1990)
	{
	
	imposto=(preco*0.015);
	printf("\n O imposto a ser pago é:R$%.2f",imposto);
	}
	else
	{
	imposto=(preco*0.01);
	printf("\n O imposto a ser pago é:R$%.2f",imposto);
	}
}
