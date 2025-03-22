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

	int i, qtd;
	float nota[qtd], nota_M=0, nota_p=0;
	
	printf("Digite a quantidade de alunos:");
	scanf("%i", &qtd);
	
	for(i=0; i<qtd; i++)
	{
		printf("Digite a nota do %d° aluno:", i+1);
		scanf("%f", &nota[i]);
	}
	
	for(i=0; i<qtd; i++)
	{
		if(nota[i]>=7.5)
		{
			nota_M++;
			
		}
		else 
		{
			nota_p++;
		}
	}
	printf("\nA quantidade de notas superiores a 7,5 é %.0f", nota_M);
		
	
}
