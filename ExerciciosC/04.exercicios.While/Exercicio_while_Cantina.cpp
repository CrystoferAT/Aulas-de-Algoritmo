#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<locale.h>

int main()
{
	setlocale(LC_ALL,"PORTUGUESE");
	system("color 0b");
	
	int op, quant;
	char resp='S';
	float soma, total=0;
	

	
	while(resp=='S'||resp=='s')
	{
		printf("\n#################################");
		printf("\n---------Cardapio Cantina--------");
		printf("\n#################################");
		printf("\n[1] Coxinha R$2,00.");
		printf("\n[2] Coxinha Cheddar R$3,00.");
		printf("\n[3] Croquete de Queijo R$3,50.");
		printf("\n[4] Misto Quente R$4,00.");
		printf("\n[5] Misto Frio R$3,70.");
		printf("\nQual sua escolha ?");
		scanf("%d", &op);
		printf("\nQual a Quantidade?");
		scanf("%d", &quant);
		system("cls");
		
		switch (op) 
		{
			case 1:
				total=total+(2*quant);
				break;
			case 2:
				total=total+(3*quant);
				break;
			case 3:
				total=total+(3.5*quant);
				break;
			case 4:
				total=total+(4*quant);
				break;
			case 5:
				total=total+(3.7*quant);
				break;
			default:
			printf("\nOperação inválida.");
			continue;
		}	
		printf("\nDeseja Continuar comprando?");
		scanf("%s", &resp);
		
	}
	printf("\nValor total %.2f", total);
	
	
}
