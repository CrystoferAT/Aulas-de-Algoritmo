#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>
#include<locale.h>

int main()
{
	setlocale(LC_ALL,"PORTUGUESE");
	system("color 0b");
	
	int dia;
	
	printf("Digite o dia da semana:");
	scanf("%i", &dia);

	switch(dia)
	{
		case 1:
			printf("\nDomingo .", dia);
			break;
		case 2:
			printf("\nSegunda-feira .", dia);
			break;
		case 3:
			printf("\nTerça-feira .", dia);
			break;
		case 4:
			printf("\nQuarta-feira .", dia);
			break;
		case 5:
			printf("\nQuinta-feira .", dia);
			break;
		case 6:
			printf("\nSexta-feira .", dia);
			break;
		case 7:
			printf("\nSabado .", dia);
			break;
		
			default:
			printf("\nDia da semana invalido.");
			break;
			
	
	}
}
