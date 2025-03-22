#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<locale.h>

int main()
{
	setlocale(LC_ALL,"PORTUGUESE");
	system("color 0b");
	int i, quant;
	float nota,soma=0 ,media=0;
	
	printf("\nDigite a quantidade de alunos: ");
	scanf("%d", &quant);
	
	for(i=0; i<quant; i++)
	{
		printf("\nDigite a nota do %d° aluno:",i+1);
		scanf("%f", &nota);
		soma=soma+nota;
	}
		media=soma/quant;
		printf("\nA média da turma é: %.2f", media);
}
