// Faça um programa, que receba as notas de 5 alunos e calcule a
//média semestral de cada um, sabendo-se que cada aluno realiza
//3 avaliações semestrais. Após o calculo da média de todos os
//alunos apresente a tela a lista das médias.

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
	
	int i, j;
	float nota, soma, media;
	float notas[5][3];
	
	for(i=0; i<5; i++)
	{
		printf("Digite as 3 notas do %dº aluno:", i+1);
		soma=0;
		for(j=0; j<3; j++)
		{
			printf("\nDigite a %dª nota:", j+1);
			scanf("%f", &notas[i][j]);
			
			soma=soma+notas[i][j];
		}
		media=soma/3;
		printf("A média do alune é %.2f\n", media);
	}
	for(i=0; i<5; i++)
	{
		for(j=0; j<3; j++)
		{
			printf("%.2f\t", notas[i][j]);
		}
		printf("\n");
	}
}
