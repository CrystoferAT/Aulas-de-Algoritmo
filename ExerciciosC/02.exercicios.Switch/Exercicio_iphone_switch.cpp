#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<conio.h>
#include<string.h>
#include<math.h>
/*Preco do iPhone e Taxas de Juros:
„h Preco do iPhone a vista: R$ 7.500,00
„h Opcoes de Parcelamento e Juros:
o 1x sem juros: Valor total = R$ 7.500,00
o 3x com 3% de juros sobre o valor a vista: Valor total = R$ 7.725,00
o 6x com 6% de juros sobre o valor a vista: Valor total = R$ 7.950,00
o 12x com 12% de juros sobre o valor a vista: Valor total = R$ 8.400,00
o 24x com 24% de juros sobre o valor a vista: Valor total = R$ 9.300,00*/

int main()
{
	setlocale(LC_ALL,"PORTUGUESE");
	system("color 0b");
	
	int cod;
	
	printf("##################################");
	printf("\nForma de pagamento do seu Iphone");
	printf("\n##################################");
	printf("\n[1] 1x sem juros.");
	printf("\n[2] 3x com 3%% de juros.");
	printf("\n[3] 6x com 6%% de juros.");
	printf("\n[4] 12x com 12%% de juros.");
	printf("\n[5] 24x com 24%% de juros.\n");
	scanf("%i", &cod);
	system("cls");
	
	printf("##################################");
	printf("\nForma de pagamento do seu Iphone");
	printf("\n##################################");
	
	switch(cod)
	{
		case 1:
			printf("\n1x sem juros de R$7.500,00.");
			break;
		case 2:
			printf("\n3x de R$2.575,00 com 3%% de juros.Valor total = R$ 7.725,00.");
			break;
		case 3:
			printf("\n6x de R$1.325,00 com 6%% de juros. Valor total = R$ 7.950,00.");
			break;
		case 4:
			printf("\n12x de R$700,00 com 12%% de juros. Valor total = R$ 8.400,00.");
			break;
		case 5:
			printf("\n24x de R$987,50 com 24%% de juros. Valor total = R$ 9.300,00.");
			break;
		default:
			printf("\nOperação inválida.");
	}

}
