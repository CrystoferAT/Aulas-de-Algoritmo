#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<locale.h>

struct livro
{
	char titulo[30], area[20];
	int ano, pag;
	float preco;
};

int main()
{
	setlocale(LC_ALL,"PORTUGUESE");
	system("color 0b");
	
	int i, ano, pag;
	struct livro book[2];

	
	for(i=0; i<2; i++)
	{
		printf("\nInforme o titulo: ");
		gets(book[i].titulo);
		fflush(stdin);
	
		printf("\nInforme a área do livro: ");
		gets(book[i].area);
		fflush(stdin);
	
		printf("\nInforme o ano de edição: ");
		scanf("%i", &book[i].ano);
		fflush(stdin);
		
		printf("\nInforme o número de páginas: ");
		scanf("%i", &book[i].pag);
		fflush(stdin);
		
		printf("\nInforme o valor do livro: ");
		scanf("%f", &book[i].preco);
		fflush(stdin);
	
	}
	for(i=0; i<2; i++)
	{
		printf("\n %s", book[i].titulo);
		printf("\n %s", book[i].area);
		printf("\n %i", book[i].ano);
		printf("\n %i", book[i].pag);
		printf("\n %f", book[i].preco);
	}
}
