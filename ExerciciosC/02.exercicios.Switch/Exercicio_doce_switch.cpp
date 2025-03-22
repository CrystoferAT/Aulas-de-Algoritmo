#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<conio.h>
#include<string.h>
#include<math.h>

int main()
{
	setlocale(LC_ALL,"PORTUGUESE");
	system("color 0b");
	
	int quant, cod;
	float preco, tot;
	char tmn ;
	
	printf("\n############################################ ");
	printf("\n         CARDÁPIO");
	printf("\n############################################");
	printf("\nCódigo | Produto    | Tamanho    | Preço ");
	printf("\n01     | Brigadeiro | 'N' Normal | R$1,55 ");
	printf("\n       |            | 'G' Grande | R$2,10 ");
	printf("\n02     | Beijinho   | 'N' Normal | R$1,50 ");
	printf("\n       |            | 'G' Grande | R$2,00 ");
	printf("\n03     | Cajuzinho  | 'N' Normal | R$1,40 ");
	printf("\n       |            | 'G' Grande | R$1,90 ");
	printf("\n01     | Trufa      | 'N' Normal | R$2,10 ");
	printf("\n       |            | 'G' Grande | R$3,00 ");
	printf("\n Escolha um produto:");
	scanf("%i", &cod);
	printf("\nEscolha o tamanho (N/G):");
	scanf(" %c", &tmn);
	printf("\nDigite a quantidade:");
	scanf("%i", &quant);
	
	switch(cod)
	{
		case 1:
			if(tmn=='n' || tmn=='N')
			{
			tot=quant*1.55;
			printf("\nTotal R$%.2f", tot);
			break;
			}
			else if (tmn=='g' || tmn=='G')
				tot=quant*2.10;
				printf("\nTotal R$%.2f", tot);
			break;
		case 2:
			if(tmn=='n' || tmn=='N')
			{
			tot=quant*1.50;
			printf("\nTotal R$%.2f", tot);
			break;
			}
			else if (tmn=='g' || tmn=='G')
				tot=quant*2.00;
				printf("\nTotal R$%.2f", tot);
			break;
		case 3:
			if(tmn=='n' || tmn=='N')
			{
			tot=quant*1.40;
			printf("\nTotal R$%.2f", tot);
			break;
			}
			else if (tmn=='g' || tmn=='G')
				tot=quant*1.90;
				printf("\nTotal R$%.2f", tot);
			break;
		case 4:
			if(tmn=='n' || tmn=='N')
			{
			tot=quant*2.10;
			printf("\nTotal R$%.2f", tot);
			break;
			}
			else if (tmn=='g' || tmn=='G')
				tot=quant*3.00;
				printf("\nTotal R$%.2f", tot);
			break;
		default:
			printf("\nOperação inválida.");
	}
	
	
}
