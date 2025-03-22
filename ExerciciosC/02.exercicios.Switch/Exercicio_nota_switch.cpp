#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<conio.h>
#include<string.h>
#include<math.h>

/* Faça um programa que converta notas em conceitos. Caso o aluno tenha obOdo uma nota
entre 0 e 49, o seu conceito deverá ser D. Caso o aluno tenha obOdo uma nota entre 50 e 69, o seu
conceito deverá ser C. Caso o aluno tenha obOdo uma nota entre 70 e 89, o seu conceito deverá ser B.
Caso o aluno tenha obOdo uma nota entre 90 e 100, o seu conceito deverá ser A. */

int main()
{
	setlocale(LC_ALL,"PORTUGUESE");
	system("color 0b");
	
	int nota;
	
	printf("Qual sua faixa de nota:");
	printf("\nDe 90 a 100 .[1]");
	printf("\nDe 70 a 89 .[2]");
	printf("\nDe 50 a 69 .[3]");
	printf("\nDe 0 a 49. [4]\n");
	scanf("%i", &nota);
	
	system("cls");

	switch(nota)
	{
		case 1:
			printf("\nSua nota foi A.");
			break;
		case 2:
			printf("\nSua nota foi B.");
			break;
		case 3:
			printf("\nSua nota foi C.");
			break;
		case 4:
			printf("\nSua nota foi D.");
			break;
		default:
			printf("\nOpção invalida.");
			break;
			
	}
}
