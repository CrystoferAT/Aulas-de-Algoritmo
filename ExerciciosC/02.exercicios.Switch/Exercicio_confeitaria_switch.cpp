/* Crie um programa que simule um sistema de pedidos de uma confeitaria. O cliente pode
escolher entre diferentes Opos de sobremesas, e o programa deve usar a estrutura switch case
para determinar o preço da sobremesa escolhida e a quanOdade comprada.
Menu de Sobremesas:
1. Bolo de Chocolate - R$ 25,00
2. Torta de Limão - R$ 20,00
3. Cheesecake de Frutas Vermelhas - R$ 30,00
4. Cupcake de Baunilha - R$ 10,00
5. Macarons - R$ 15,00
6. Pavê de Maracujá - R$ 18,00
7. Mousse de Chocolate - R$ 12,00
8. Brigadeiro Gourmet - R$ 5,00 */

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
	
	int cod, quant;
	float preco, tot;
	
	printf("\n######################### ");
	printf("\n         CARDÁPIO");
	printf("\n#########################");
	printf("\n[1]Bolo de Chocolate - R$ 25,00");
	printf("\n[2]Torta de Limão - R$ 20,00");
    printf("\n[3]Cheesecake de Frutas Vermelhas - R$ 30,00");
 	printf("\n[4]Cupcake de Baunilha - R$ 10,00");
	printf("\n[5]Macarons - R$ 15,00");
	printf("\n[6]Pavê de Maracujá - R$ 18,00");
	printf("\n[7]Mousse de Chocolate - R$ 12,00");
	printf("\n[8]Brigadeiro Gourmet - R$ 5,00");
	printf("\nDigite uma opção ");
	scanf("%i", &cod);
	printf("\nDigite a quantidade:\n");
	scanf("%i", &quant);
	system("cls");

	printf("\n######################### ");
	printf("\n         Obrigado");
	printf("\n#########################");
	printf("\nQuantidade :%i", quant);

	switch(cod)
	{
		case 1:
			tot=quant*25;
			printf("\nTotal R$%.2f", tot);
			break;
		case 2:
			tot=quant*20;
			printf("\nTotal R$%.2f", tot);
			break;
		case 3:
			tot=quant*30;
			printf("\nTotal R$%.2f", tot);
			break;
		case 4:
			tot=quant*10;
			printf("\nTotal R$%.2f", tot);
			break;
		case 5:
			tot=quant*15;
			printf("\nTotal R$%.2f", tot);
			break;
		case 6:
			tot=quant*18;
			printf("\nTotal R$%.2f", tot);
			break;
		case 7:
			tot=quant*12;
			printf("\nTotal R$%.2f", tot);
			break;
		case 8:
			tot=quant*5;
			printf("\nTotal R$%.2f", tot);
			break;
		default:
			printf("\nOpção inválida.");
			break;
	}
}
