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

	float mat [2][3], soma, media;
	int i, j;
	
	for(i=0; i<2; i++)
	{
		printf("Informe as 3 notas do aluno %d\n", i+1);
		soma=0;
		for(j=0; j<3; j++)
		{
			printf("Informe a nota %d:", j+1);
			scanf("%f", &mat[i][j]);
			soma=soma+mat[i][j];	
		}	
		media=soma/3;
		printf("\nA média do aluno %d é:%.2f \n", i+1, media);
	}	
	printf("\nMédias armazenadas\n");
	for(i=0; i<2; i++)
	{
		for(j=0; j<3; j++)
		{
		printf("%.2f\t", mat[i][j]);
		}
		printf("\n");
	}
	system("pause");
}

