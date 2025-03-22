#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<locale.h>

struct animal
{
	char nome[30], raca[20], tutor[30];
	int idade;
};

int main()
{
	setlocale(LC_ALL,"PORTUGUESE");
	system("color 0b");
	
	int i;
	struct animal anima[2];
	
	for(i=0; i<2; i++)
	{
		printf("\nInforme o nome do animal: ");
	gets(anima[i].nome);
	fflush(stdin);
	
	printf("\nInforme a raça do animal: ");
	gets(anima[i].raca);
	fflush(stdin);
	
	printf("\nInforme a idade do animal: ");
	scanf("%i", &anima[i].idade);
	fflush(stdin);
	
	printf("\nInforme o nome do Tutor: ");
	gets(anima[i].tutor);
	fflush(stdin);
	
	}
	for(i=0; i<2; i++)
	{
		printf("\n %s", anima[i].nome);
		printf("\n %s", anima[i].raca);
		printf("\n %i", anima[i].idade);
		printf("\n %s", anima[i].tutor);
	}
}
