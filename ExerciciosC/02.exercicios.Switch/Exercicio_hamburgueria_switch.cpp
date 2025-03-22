/*3) Crie um programa que simule um sistema de pedidos de uma hamburgueria. O cliente pode
escolher entre diferentes Opos de hambúrgueres, e o programa deve usar a estrutura switch case
para determinar o preço do hambúrguer escolhido.
Requisitos:
1. O programa deve exibir um menu com as opções de hambúrgueres disponíveis.
2. O cliente deve poder escolher uma das opções digitando um número correspondente.
3. Usando switch case, o programa deve exibir o nome do hambúrguer e o seu preço.
4. Caso o cliente digite uma opção inválida, o programa deve informar que a escolha é inválida*/
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
	
	int cod;
	
	printf("########### BEM VINDO A HAMBURGUERIA EXPRESS ############");
	printf("\n###### CARDAPIO ##########");
	printf("\n[1]Hamburguer P");
	printf("\n[2]Hamburguer M");
	printf("\n[3]Hamburguer G");
	printf("\n[4]Hamburguer GG");
	printf("\n Digite uma opção.\n");
	scanf("%i", &cod);
	
	system("cls");
	printf("############ Hamburgueria express #############");
	switch(cod)
	{
		case 1:
			printf("\nHamburguer P R$12,90.");
			break;
		case 2:
			printf("\nHamburguer M R$13,90.");
			break;
		case 3:
			printf("\nHamburguer G R$14,90.");
			break;
		case 4:
			printf("\nHamburguer GG R$15,90.");
			break;
		default:
			printf("\nOpção invalida.");
	}
}
