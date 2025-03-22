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

	int mat[5][5], somat=0, somal4=0, somac2=0, somadp=0;
	int i, j;
	
	for(i=0; i<5; i++)
	{
		for(j=0; j<5; j++)
		{
			printf("Informe o valor da posição [%d][%d]:", i+1,j+1);
			scanf("%i", &mat[i][j]);
			
			somat=somat+mat[i][j];
			
			if(i==3) //para a posição 4 porque i=0 porque i começa em zero//
			{
				somal4=somal4+mat[i][j];
			}
			if(j==1)//para a posição 2 porque i=0 porque i começa em zero//
			{
				somac2=somac2+mat[i][j];
			}
			if(i==j)//para a posição da diagona principal//
			{
				somadp=somadp+mat[i][j];
			}
		}
	}
	printf("\n%d", somal4);
	printf("\n%d", somac2);
	printf("\n%d", somadp);
	printf("\n%d", somat);
}
