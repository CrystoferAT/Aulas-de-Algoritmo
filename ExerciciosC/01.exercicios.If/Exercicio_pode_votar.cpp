#include<stdio.h>
#include<locale.h>
#include<stdlib.h>

int main()
{
	system("color 0b");
	setlocale(LC_ALL,"PORTUGUESE");
	int idade;
	printf("\n Digite sua idade:");
	scanf("%i",&idade);
	
	if ((idade>=16 && idade<18)||idade>=70)
	{
		printf("\n Você ja pode votar.");
		printf("\n Porém não é obrigatório.");
	}
	else if(idade<16)
	{
		printf("Voce ainda não pode votar demenor");
	}
	else
	{
		printf("\n Você é obrigado a votar otário.");
	}
}
