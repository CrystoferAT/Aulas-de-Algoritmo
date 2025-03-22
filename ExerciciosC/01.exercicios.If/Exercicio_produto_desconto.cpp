#include<stdio.h>
#include<locale.h>
#include<stdlib.h>

int main()

{
	system("color 0b");
	setlocale(LC_ALL,"PORTUGUESE");
	
	char nome[20];
	int quant;
	float preco, des, total, total_p;
	
	printf("Digite o nome :");
	scanf("%s",&nome);
	printf("\nDigite o preço :");
	scanf("%f",&preco);
	printf("Digite a quantidade :");
	scanf("%i",&quant);
	
	if(quant<=5)
	{
		total=preco*quant;
		des=total*0.02;
		total_p=total-des;
		printf("O produto %s",nome);
		printf("\nTotal a pagar R$%.2f",total_p);
	}
	else if(quant>5 &&quant<=10)
	{
		total=preco*quant;
		des=total*0.03;
		total_p=total-des;
		printf("O produto %s",nome);
		printf("\nTotal a pagar R$%.2f",total_p);	
	}
	else
		{
		total=preco*quant;
		des=total*0.05;
		total_p=total-des;
		printf("O produto %s",nome);
		printf("\nTotal a pagar R$%.2f",total_p);
		}
}
