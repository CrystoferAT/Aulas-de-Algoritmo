#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<locale.h>

struct pessoa 
{
	char nome[50], end[50];
	int idade, numero ;
};
int main()
{
	setlocale(LC_ALL,"PORTUGUESE");
	system("color 0b");
	
	int i; 
	struct pessoa cad[2];
	
	for (i=0; i<2; i++)
	{
		printf("Informe o nome da %iª pessoa: ", i+1);
		gets (cad[i].nome);
		fflush(stdin);
		
		printf("\nInforme a idade da %iª pessoa: ", i+1);
		scanf("%i", &cad[i].idade);
		fflush(stdin);
		
		printf("\nInforme o Endereço da %iª pessoa: ", i+1);
		gets (cad[i].end);
		fflush(stdin);
		
		printf("\nInforme o número da Residencia: \n", i+1);
		scanf("%i", &cad[i].numero);
		fflush(stdin);
		
	}
	
	for (i=0; i<2; i++)
	{
		printf("\n%s", cad[i].nome);
		printf("\n%i", cad[i].idade);
		printf("\n%s", cad[i].end);
		printf("\n%i", cad[i].numero);
	}
}
