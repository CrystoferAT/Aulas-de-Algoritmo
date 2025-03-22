#include<stdio.h>
#include<math.h>
#include<conio.h>
#include<locale.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	setlocale(LC_ALL,"PORTUGUESE");
	system("color 9");
	
	int cod;
	float tot, imp, preco;
	
	printf("#############################");
	printf("\nDigite o valor do produto:\nR$");
	scanf("%f", &preco);
	printf("\nDigite a opção do seu estado:");
	printf("\n[1] MG.");
	printf("\n[2] SP.");
	printf("\n[3] RJ.");
	printf("\n[4] MS.\n");
	scanf("%i", &cod);
		
	switch(cod)
	{
		case 1:
			imp=preco*0.07;
			tot=preco+imp;
			printf("\nTotal mais imposto :R$%.2f", tot);
			break;
		case 2:
			imp=preco*0.12;
			tot=preco+imp;
			printf("\nTotal mais imposto :R$%.2f", tot);
			break;
		case 3:
			imp=preco*0.15;
			tot=preco+imp;
			printf("\nTotal mais imposto :R$%.2f", tot);
			break;
		case 4:
			imp=preco*0.08;
			tot=preco+imp;
			printf("\nTotal mais imposto :R$%.2f", tot);
			break;
		default:
			printf("\nEstado inválido.");
	}
}
