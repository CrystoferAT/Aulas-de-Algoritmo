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

	int mat1[4][3], mat2[4][3], mat3[4][3], somat=0, somal4=0, somac2=0, somadp=0;
	int i, j;
	
	for(i=0; i<4; i++)
	{
		for(j=0; j<3; j++)
		{
			printf("Informe o valor da posição [%d][%d] da mat1:", i+1,j+1);
			scanf("%i", &mat1[i][j]);
		}
	
	}
	system("pause");
	system("cls");
	for(i=0; i<4; i++)
	{
		for(j=0; j<3; j++)
		{
			printf("Informe o valor da posição [%d][%d] da mat2:", i+1,j+1);
			scanf("%i", &mat2[i][j]);
		}
	
	}
	for(i=0; i<4; i++)
	{
		for(j=0; j<3; j++)
		{
			mat3[i][j]=mat1[i][j]+mat2[i][j];
		}
	
	}
 printf("\nSoma das Matrizes mat3:\n");
    for(i = 0; i < 4; i++) 
	{
        for(j = 0; j < 3; j++) 
		{
            printf("%d\t ", mat3[i][j]);
        }
        printf("\n");
	}
}
