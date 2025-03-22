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
	
	printf("\n############# BEM VINDO AO HOTEL TRANSILVANIA ##############\n");
	printf("\nDigite a opção desejada:\n");
	printf("\nFazer check-in [1].");
	printf("\nFazer check-out [2].");
	printf("\nChamar serviço de quarto [3].");
	printf("\nLavanderia [4].");
	printf("\nSolicitar transferência [5].");
	scanf("%i", &cod);
	switch(cod)
	{
	
		case 1:
			printf("Serviço desejado : Check-in.");
			printf("\n#################### Obrigado ####################");
		break;
		
		case 2:
			printf("Serviço desejado : Check-out.");
			printf("\n#################### Obrigado ####################");
		break;
		
		case 3:
			printf("Serviço desejado : Serviço de quarto.");
			printf("\n#################### Obrigado ####################");
		break;
		
		case 4:
			printf("Serviço desejado : Lavanderia.");
			printf("\n#################### Obrigado ####################");
		break;
		
		case 5:
			printf("Serviço desejado : Transfêrencia.");
			printf("\n#################### Obrigado ####################");
		break;
		
		default:
			printf("Opção invalida.");
			printf("\n#################### Obrigado ####################");
			break;
		
	}
}
