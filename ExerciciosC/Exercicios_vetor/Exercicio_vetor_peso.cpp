#include<math.h>
#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<locale.h>

int main()
{
	setlocale(LC_ALL,"PORTUGUESE");
	system("color 0b");
	
	float peso[7], media=0, perda=0, gramas;
	int i ;
	
	for(i=0; i<7; i++)
	{
		printf("Digite o seu peso do dia:Kg", i+1);
		scanf("%f", &peso[i] );
	}
	perda=peso[0]-peso[6];
	media=perda/7;
	gramas=media*1000;
	for(i=0; i<7; i++)
	{
		printf("\nO peso do %d° dia é:%.2fKg ", i+1 ,peso[i]);
	}
	printf("\nA média de perda de peso por dia é:%.2f Gramas ", gramas);

}
