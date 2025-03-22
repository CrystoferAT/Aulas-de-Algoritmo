#include<stdio.h>
#include<math.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#include<locale.h>

int main()
{
	setlocale(LC_ALL, "PORTUGUESE");
	system("color 0b");
	
	int quant , fpg;
	char nome[50];
	float valor, tot, dsc, pg, juro;
	
	printf("\n######### Bem vindo ##########\n");
	
	printf("\nInforme o produto:");
	scanf("%s",&nome);
	system("cls");
	
	printf("\nInforme o valor do produto:");
	scanf("%f",&valor);
	system("cls");
	
	printf("\nInforme a quantidade:");
	scanf("%i",&quant);
	system ("cls");
	
	printf("\n Informe a forma de pagamento:");
	printf("\n[1] para avista ou cheque.");
	printf("\n[2] para avista ou cartão e credito.");
	printf("\n[3] para dividir em duas vezes.");
	printf("\n[4] para dividir em três vezes.");
	scanf("%i", &fpg);
	system("cls");
	printf("\n######### Volte sempre ##########\n");
	
	switch(fpg)
	{
		case 1:
			tot=quant*valor;
			dsc=tot*0.1;
			pg=tot-dsc;
			printf("%s",nome);
			printf("\n%i unidades",quant);
			printf("\n Total a pagar é : R$%.2f",pg);
			printf("\n######### Volte sempre ##########\n");
		break;
		case 2:
			tot=quant*valor;
			dsc=tot*0.05;
			pg=tot-dsc;
			printf("%s",nome);
			printf("\n%i unidades",quant);
			printf("\n Total a pagar é : R$%.2f",pg);
			printf("\n######### Volte sempre ##########\n");
		break;
		case 3:
			tot=quant*valor;
			printf("%s",nome);
			printf("\n%i unidades",quant);
			printf("\n Total a pagar é : R$%.2f",tot);
			printf("\n######### Volte sempre ##########\n");
			
		break;
		case 4:
			tot=quant*valor;
			juro=tot*0.1;
			pg=tot+juro;
			printf("%s",nome);
			printf("\n%i unidades",quant);
			printf("\n Total a pagar é : R$%.2f",pg);
			printf("\n######### Volte sempre ##########\n");
		break;
		
		defaut:
		break;
			
	}
	
	
}

