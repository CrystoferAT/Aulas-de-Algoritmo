#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<conio.h>
#include<string.h>

int main()
{
	setlocale(LC_ALL,"PORTUGUESE");
	system("color 0b");
	
	int i;
	float peso, tamanho, Mpeso=0, Mtamanho=0;
	
	printf ("########Maternidade########");
	
	for(i=0; i<15; i++)
	{
		printf("\nDigite o peso da criança:Kg");
		scanf("%f", &peso);
		printf("\nDigite o tamanho da criança:Cm");
		scanf("%f", &tamanho);
		
		if(tamanho>Mtamanho)
		{
			Mtamanho=tamanho;
		}
		if(peso>Mpeso)
		{
			Mpeso=peso;
		}		
	}
	printf("\nMaior tamno:%.2fCm", Mtamanho);
	printf("\nMaior peso:%.2fKg", Mpeso);
}
