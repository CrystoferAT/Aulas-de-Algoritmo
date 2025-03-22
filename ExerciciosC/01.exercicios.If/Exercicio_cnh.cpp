#include<stdio.h>
#include<locale.h>
int main()
{
	setlocale(LC_ALL,"PORTUGUESE");
	float ani, anf, idade;
	printf("Digite seu ano de nascimento:");
	scanf("%f",&ani);
	printf("Digite o ano atual:");
	scanf("%f",&anf);
	idade=anf-ani;
		
	if(idade>=18)
	{
		printf("\n Ja tem idade para fazer cnh");
	}
	else
	{
		printf("\n Ainda nao tem idade para cnh ");
	}
}
